#include<bits/stdc++.h>

using namespace std;

long long Tinh(long long n, long long a,long long b,long long c){
    long long bc;
    bc=(a/__gcd(a,b))*b;
    if (bc%c==0){
        return 0;
    }
    long long bn;
    bn = (bc/__gcd(bc,c))*c;
    return (n/bc)-(n/bn);
}

int main(){
    long long n,a,b,c;
    while(cin>>n>>a>>b>>c){
        cout<<Tinh(n,a,b,c)+Tinh(n,b,c,a)+Tinh(n,c,a,b)<<'\n';
    }
}
