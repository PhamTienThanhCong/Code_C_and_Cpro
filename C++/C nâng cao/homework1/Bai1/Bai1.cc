#include <iostream>
#include <fstream>
#include <string>
#include <tuple>
#include <vector>  
#include <math.h>

using namespace std;

struct Node{
    float x = 2;
    float y = 5;
};

void sliceString(string str, Node* node) {

    int pos = str.find(",");
    str = str.substr(pos + 1);

    pos = str.find(",");
    string x_string = str.substr(0, pos);
    str = str.substr(pos + 1);

    pos = str.find(",");
    string y_string = str.substr(0, pos);
    str = str.substr(pos + 1);

    node->x = stof(x_string);
    node->y = stof(y_string);
}

float khoangCach(Node a, Node b) {
    float sum = 0.0;
    sum = sqrt((a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y));
    return sum;
}

int main(int argc, char **argv){
    ifstream inFile;

    string path(argv[1]);
    int nodeID = stoi(argv[2]);

    inFile.open(path);

    if (!inFile) {
        cerr << "ko the mo file";
        exit(1); 
    }

    string line;
    getline(inFile, line);
    vector<Node> point;
    int count = 0;
    while (getline(inFile, line)){
        Node node;
        sliceString(line, &node);
        point.push_back(node);
    }
    inFile.close();
    count = -1;
    int max_index = 0;
    int min_index = 0;
    if (max_index == nodeID){
        max_index --;
        min_index --;
        if (max_index < 0){
            max_index = 1;
            min_index = 1;
        }
    }
    float max_value = khoangCach(point.at(max_index) , point.at(nodeID));
    float min_value = khoangCach(point.at(min_index) , point.at(nodeID));
    for (const Node& i : point) {
        count++;
        if (count == nodeID){
            continue;
        }else{
            float newSize = khoangCach(point.at(nodeID) , i);
            if (max_value < newSize){
                max_value = newSize;
                max_index = count;
            }
            if (newSize < min_value){
                min_value = newSize;
                min_index = count;
            }
        }
        // cout << newSize<<endl;
    }
    ofstream outFile;
    outFile.open("./output.txt");
    outFile << "Gan Nhat la: " << min_index << " khoang cach " << min_value << endl;
    outFile << "Xa nhat la: " << max_index  << " khoang cach " << max_value << endl;
    outFile.close();

}