#include<bits/stdc++.h>

using namespace std;

int main(){
    int _min=1000,_max=-1000;
    int n,x[101],y[101];
    cin>>n;
    for (int i=1;i<=n;i++){
        cin>>x[i]>>y[i];
        _max = max(_max,x[i]);
        _min = min(_min,x[i]);
    }
    cout<<_min<<_max;
}