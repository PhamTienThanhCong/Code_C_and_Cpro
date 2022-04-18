#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

struct RichMan{
    string name;
    int rank;
    double age;
    string country;
    string finalWorth;
};

int main(int argc, char const *argv[])
{
    if (argc < 4){
        cout << "Khong truyen du tham so";
        return 0;
    }

    string path(argv[1]);
    string countryInput(argv[2]);
    int ageInput = stoi (argv[3]);

    ifstream infile;

    infile.open(path);

    if (!infile){
        cout << "Khong doc dc file";
        return 0;
    }

    string line;

    getline(infile, line);

    vector<RichMan> RichManWords;

    ofstream outfile;
    outfile.open("./result.csv");
    string lineCheck = "asdasdasd\"";
    while (getline(infile, line)){
        if (lineCheck[lineCheck.length()-1] == '"'){
            RichMan men;
            stringstream ss(line);
            string token;
            getline(ss, token, ',');
            men.age = stoi(token);
            getline(ss, token, ',');
            men.name = token;

            getline(ss, token, ',');
            men.age = stod(token);

            getline(ss, token, ',');
            men.finalWorth = token;

            getline(ss, token, ',');
            getline(ss, token, ',');
            getline(ss, token, ',');
            getline(ss, token, ',');
            // getline(ss, token, ',');
            string name = token;

            while (name[0] == '"'){
                getline(ss, token, ',');
                name += token;
                if (name[name.length()-1] == '"'){
                    break;
                }
            }
            getline(ss, token, ',');
            men.country = token;
            RichManWords.push_back(men);
            
        }
        lineCheck = line;
    }
    for (int i = 0; i < RichManWords.size(); i++){
        if (RichManWords[i].country == countryInput){
            outfile << RichManWords[i].name << " " << RichManWords[i].age << " " << RichManWords[i].country << " " << RichManWords[i].finalWorth <<" " << RichManWords[i].rank <<"\n";
        }
    }
    return 0;
}
