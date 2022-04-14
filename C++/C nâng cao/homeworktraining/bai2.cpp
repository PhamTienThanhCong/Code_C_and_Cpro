#include <iostream>
#include <fstream>
#include <math.h>
#include <string>
#include <tuple>
#include <vector>  
#include <sstream>
struct Node{
    float x;
    float y;
    int w;
};


using namespace std;
int main(int argc, char* argv[]){
    ifstream inFile;
    string path = argv[1];
    int id = stoi (argv[2]);
    int groupid = stoi (argv[3]);

    inFile.open(path);
    if(!inFile){
        cout << "can't open file" << endl;
        exit(1);
    }
    string line;
    
    getline(inFile, line);
    getline(inFile, line);
    getline(inFile, line);
    getline(inFile, line);
    getline(inFile, line);
    getline(inFile, line);
    vector<Node> points;
    while (getline(inFile,line)){
            stringstream ss(line);
            string token;
            getline(ss, token,',');
            x->points = stod(token);
    }
    
}