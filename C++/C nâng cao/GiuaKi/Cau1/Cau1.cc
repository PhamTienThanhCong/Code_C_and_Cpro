#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

string remove(string str){
    for (int i = 0; i < str.length(); i++){
        if (str[i] == '"'){
            str[i] = '\0';
        }
    }
    return str;
}

int main(int argc, char const *argv[])
{

    if (argc < 2){
        cout << "Khong truyen tham so";
        return 0;
    }

    string path(argv[1]);
    ifstream infile;

    infile.open(path);

    if (!infile){
        cout << "Khong doc dc file";
        return 0;
    }

    string line;

    getline(infile, line);

    double total_bills = 0;
    double total_tip_men = 0;
    double total_tip_woman = 0;

    while (getline(infile, line)){
        stringstream ss(line);
        string token;
        getline(ss, token, ',');
        getline(ss, token, ',');

        token = remove(token);
        total_bills += stod(token);

        getline(ss, token, ',');
        token = remove(token);
        double tip = stod(token);

        getline(ss, token, ',');
        token = remove(token);

        if (token[1] == 'F'){
            total_tip_woman += tip;
        }else{
            total_tip_men += tip;
        }
    }

    double total_tips = total_tip_men + total_tip_woman;

    cout << "Cau 2: \n";
    cout << "Tong Tien Tip: " << total_tips << "\n";

    cout << "Trung Binh Tien Tip: " << total_tips/total_bills << "\n";
    
    cout << "Cau 3: \n";
    if (total_tip_men < total_tip_woman){
        cout << "So Tien Tip cua Nu nhieu hon " << total_tip_woman;
    }else{
        cout << "So Tien Tip cua Nam nhieu hon: " << total_tip_men;
    }
    
    return 0;
}
