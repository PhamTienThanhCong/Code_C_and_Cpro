#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){ 
    ifstream inFile;
    ofstream outFile;
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

    outFile.open("./result_out.txt");

    if (sumValue != 0){
        outFile << "sum time: " << sumTime << "\n";
        outFile << "sum value: " << sumValue << "\n";

        outFile << "Trung Binh vlaue: " << sumValue/sum << "\n";
        outFile << "Trung Binh 1 s: " << sumValue/sumTime << "\n";

    }else{
        outFile << "Khong phu hop ";
    }

}