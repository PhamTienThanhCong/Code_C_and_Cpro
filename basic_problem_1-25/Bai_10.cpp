#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,x,max_length=1;
    cin>>n;
    int a[n]={0};
    cin>>x;
    a[1]=1;
    for (int i=2;i<=n;i++){
        cin>>x;
        a[i]=1;
        if (x==0){
            a[i]=++max_length;
        }
        else if (i-x==1){
            for (int j=1;j<i;j++){
                a[j]++;
            }
            max_length++;
        }
        else if (i-x>1){
            a[i]=max_length-x+1;
            for (int j=1;j<i;j++){
                if (a[j]>=a[i]){
                    a[j]++;
                }
            }
            max_length++;
        }
    }
    for (int i=1;i<=n;i++){
        cout<<a[i]<<' ';
    }
}