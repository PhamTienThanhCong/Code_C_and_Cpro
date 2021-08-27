#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int t[n+2],r[n+2];
    for (int i=1;i<=n;i++){
        cin>>t[i];
    }
    for (int i=1;i<n;i++){
        cin>>r[i];
    }
    int i=1,j=1;
    int Tong=0;
    while (j<=n)
    {
        if ((r[i]<t[j]+t[j+1])&&(i<n)){
            Tong+=r[i];
            j+=2;
            i+=2;
        }
        else {
            Tong+=t[j];
            j++;
            i++;
        }
    }
    cout<<Tong;
}