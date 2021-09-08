#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,sl=0;
    int a[101],b[1000000][3];
    cin>>n;
    for (int i=1;i<=n;i++){
        cin>>a[i];
    }
    for (int i=1;i<n;i++){
        for (int j=i+1;j<=n;j++){
            if (a[i]==a[j]){
                sl++;
                b[sl][1]=i;
                b[sl][2]=j;
            }
        }
    }
    cout<<sl<<'\n';
    for (int i=1;i<=sl;i++){
        cout<<b[i][1]<<' '<<b[i][2]<<'\n';
    }
}