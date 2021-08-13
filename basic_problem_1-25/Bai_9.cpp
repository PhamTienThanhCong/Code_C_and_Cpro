#include<bits/stdc++.h>

using namespace std;

int kt(int a[],int x,int n){
    int dem=0;
    for (int i=1;i<=n;i++){
        if (x<a[i]){
            dem++;
        }
    }
    return dem;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=1;i<=n;i++){
        cin>>a[i];
        cout<<kt(a,a[i],i-1)<<' ';
    }
}