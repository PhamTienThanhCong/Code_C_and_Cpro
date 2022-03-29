#include <iostream>
#include <fstream>
#include <string>
#include <vector>  
#include <math.h>

using namespace std;

struct Node{
    int nodeI;
    int nodeJ;
    float w;
};

void sliceString(string str, Node* node) {

    int pos = str.find(",");
    string nodei = str.substr(0, pos);
    str = str.substr(pos + 1);

    pos = str.find(",");
    string nodej = str.substr(0, pos);
    str = str.substr(pos + 1);

    pos = str.find(",");
    string nodew = str.substr(0, pos);
    str = str.substr(pos + 1);

    node->nodeI = stoi(nodei);
    node->nodeJ = stoi(nodej);
    node->w = stof(nodew);
}

int main(int argc, char** argv){
    ifstream inFile;
    ofstream outFile;

    string path(argv[1]);
    int nodeID = stoi(argv[2]);
    float So_W = stof(argv[3]);

    inFile.open(path);

    if (!inFile) {
        cerr << "ko the mo file";
        exit(1); 
    }

    string line;
    getline(inFile, line);

    vector<Node> network;

    while (getline(inFile, line)){
        Node node;
        sliceString(line, &node);
        network.push_back(node);
    }

    inFile.close();
    outFile.open("./output.txt");
    outFile<<"Thong tin\nnodei, nodej, trongSo\n";

    for (const Node& i : network) {
        if (i.w > So_W) {
            if (i.nodeI == nodeID || i.nodeJ == nodeID) {
                outFile << i.nodeI <<", "<< i.nodeJ << ", " << i.w <<"\n";
            }
        }
    }
    outFile.close();
}