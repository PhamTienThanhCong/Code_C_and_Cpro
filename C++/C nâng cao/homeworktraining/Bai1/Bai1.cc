#include <iostream>
#include <fstream>
#include <math.h>
#include <string>
#include <tuple>
#include <vector>  

using namespace std;

struct nodeID {
    float x, y;
    int node;
};

string removeSpace(string str) {
    for(int i=str.size()-1; i >= 0; i-- )
    {
        if(str[i]==' '&&str[i]==str[i-1]) //added equal sign
        {
            str.erase( str.begin() + i );
        }
    }
    return str;
}

void sliceString(string str, nodeID* node) {

    int pos = str.find(" ");
    str = str.substr(pos + 1);

    pos = str.find(" ");
    string x_string = str.substr(0, pos);
    str = str.substr(pos + 1);

    pos = str.find(" ");
    string y_string = str.substr(0, pos);
    str = str.substr(pos + 1);

    pos = str.find(" ");
    string node_string = str.substr(0, pos);
    str = str.substr(pos + 1);

    node->x = stof(x_string);
    node->y = stof(y_string);
    node->node = stoi(node_string);
}

int main(int argc, char** argv){
    ifstream inFile;

    if (argc < 4){
        cout << "Loi chuong trinh";
        exit(1);
    }

    string path(argv[1]);
    float id = stof(argv[2]);
    float n = stof(argv[3]);
    inFile.open(path);

    
    if (!inFile) {
        cerr << "ko the mo file";
        exit(1); 
    }
    string line;
    getline(inFile, line);
    getline(inFile, line);  
    getline(inFile, line);

    vector<nodeID> point;
    while (getline(inFile, line)){
        nodeID node;
        line = removeSpace(line);
        sliceString(line, &node);
        point.push_back(node);
    }

    inFile.close();

    ofstream outFile;
    outFile.open("./sim.txt");

    for (int i = 0; i < point.size(); i++){
        if (point[i].node == 1){
            cout <<i<< " " <<point[i].x << " "<<point[i].y << " "<< point[i].node << endl;
        }
    }

    for (int i = 0; i < point.size(); i++){
        outFile <<i<< " " <<point[i].x << " "<<point[i].y << endl;
    }

    outFile << endl;

    for (int i = 0; i < point.size(); i++){
        if (point[i].x == id){
            outFile <<i<< " " <<point[i].x << " "<<point[i].y << " "<< point[i].node << endl;
        }
    }

}