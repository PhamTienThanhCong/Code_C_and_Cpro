#include<bits/stdc++.h>

using namespace std;

bool SNT(int a){
    if (a<4){
        return true;
    }
    if (a==1){
        return false;
    }
    for (int i=2;i<=int(sqrt(a));i++){
        if (a%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int a,b;
    cin>>a>>b;
    for (int i=a;i<=b;i++){
        if (SNT(i)){
            cout<<i<<'\n';
        }
    }
}