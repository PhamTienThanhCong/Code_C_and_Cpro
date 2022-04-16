#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

struct NhaHang{
    double total_bill;
    double tip;
    string sex;
    string smoker;
    string day;
    string time;
    int size;
};

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
    string path = "./tips.csv";

    ifstream infile;

    infile.open(path);

    string line;

    getline(infile, line);

    vector<NhaHang> nhahang;

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

    cout << "Tong Tien Tip: " << total_tips << "\n";

    cout << "Trung Binh Tien Tip: " << total_tips/total_bills << "\n";
    cout << total_bills<<endl;
    cout << total_tip_men<<endl;
    cout << total_tip_woman<<endl;
    
    return 0;
}
