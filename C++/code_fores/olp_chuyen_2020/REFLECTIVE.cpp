#include<bits/stdc++.h>

using namespace std;

long int lf,rt;

long int Dem(long int a){
    long int Tong=0,i=2,t=1,temp;
    while (a/i>0){
        temp=(a/i)-a/(i*2);
        Tong+=temp*t;
        i=i*2;
        t++;
    }
    return Tong;
}

int main(){
    cin>>lf>>rt;
    cout<<Dem(rt)-Dem(lf-1);
}