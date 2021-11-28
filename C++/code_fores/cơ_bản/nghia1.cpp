#include <iostream>
#include <string.h>
#include <fstream>


using namespace std;

void xu_li(string str) {
    char* temp=new char[str.length()+1];
    strcpy(temp,str.c_str());
    char* p1=strtok(temp," ");
    while(p1!=NULL) {
        p1[0]=toupper(p1[0]);
        cout<<p1<<" ";
        p1=strtok(NULL," ");
    }
}
    

int main() {
    ifstream input("3.2.1.txt");
    int n;
    input>>n;
    input.ignore(1);
    for(int i=1;i<=n;i++) {
        string str;
        getline(input,str);
        str = str+' ';
        for(int i=0;i<str.length()-1;i++) {
            if (str[i] >= 'A' && str[i]<='Z')
                  str[i]+=32;
        }

        xu_li(str);
        cout<<endl;
    }
    input.close();

 
}