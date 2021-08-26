#include<bits/stdc++.h>

using namespace std;

char a[2000];
char b[2000];
int opt[2000][2000];

int main()
{
    cin>>a;
    cin>>b;
    for (int i=0;i<strlen(a);i=i+1)
        for (int j=0;j<strlen(b);j=j+1)
            {
            if (a[i]==b[j]){
                opt[i+1][j+1]=opt[i][j]+1;
            }
            else 
                opt[i+1][j+1]=max(max(opt[i][j],opt[i][j+1]),opt[i+1][j]);
            }
    // for (int i=0;i<strlen(a);i=i+1){
    //     for (int j=0;j<strlen(b);j=j+1){
    //         cout<<opt[i][j]<<"   ";
    //     }
    //     cout<<endl;
    // }
    cout << opt[strlen(a)][strlen(b)];
}