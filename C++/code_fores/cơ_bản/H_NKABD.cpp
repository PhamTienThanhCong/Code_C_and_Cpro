#include<bits/stdc++.h>

using namespace std;

int l,r,sum=0;

bool kt(int a){
    int tong=1,b;
    b=int(sqrt(a));
    if (b*b==a){
        tong -= b;
    }
    for (int i=2;i<=b;i++){
        if (a%i==0){
            tong += i;
            tong += int(a/i);
        }
        if (tong>a){
            return true;
        }
    }
    return false;
}

int main(){
    cin>>l>>r;
    for (int i=l;i<=r;i++){
        if (kt(i)){
            sum++;
        }
    }
    cout<<sum;
}