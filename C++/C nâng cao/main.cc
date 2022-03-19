#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){ 
    ifstream inFile;
    inFile.open("./result.csv");

    if (!inFile) {
        cerr << "ko the mo file";
        exit(1); 
    }

    string line;
    getline(inFile, line);
    double sumValue = 0, sumTime = 0;
    double sum = 0;
    while (getline(inFile, line)){
        if (line[0] == 'a'){
            sum++;
            sumValue += double(line[1]);
            sumTime += double(line[2]);
        }
    }

    if (sumValue != 0){
        cout << "sum time: " << sumTime << "\n";
        cout << "sum value: " << sumValue << "\n";

        cout << "Trung Binh vlaue: " << sumValue/sum << "\n";
        cout << "Trung Binh 1 s: " << sumValue/sumTime << "\n";

    }else{
        cout << "Khong phu hop ";
    }

}