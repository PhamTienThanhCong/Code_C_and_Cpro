#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k,r,power=0;
    cin>>n>>k;
    r=int(n/2)+1;
    int x[k],y[k];
    for (int i=1;i<=k;i++){
        cin>>x[i]>>y[i];
    }
    for (int i=1;i<=k;i++){
        if (x[i]>r){
            x[i] = n-x[i]+1;
        }
        if (y[i]>r){
            y[i] = n-y[i]+1;
        }
        int temp = min((r-x[i]),(r-y[i]));
        int pow = temp*15;
        //pow += (max((r-x[i]-temp),(r-x[i]-temp)))*10;
        pow += (r-(min(x[i],y[i])) - temp)*10;
        // if (temp==0){
        //     pow += (r-(min(x[i],y[i])) - temp)*10;
        // }
        power+=pow;
        //cout<<pow<<' ';
    }
    cout<<power;
}