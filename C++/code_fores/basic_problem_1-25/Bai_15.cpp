#include<bits/stdc++.h>

using namespace std;

int a[100][100],sl=0,h=1;
int m,n;

bool tinh(int sky,int a[][100],int i, int j,int n, int m){
    int temp=0;
    for (int l=i+1;i<=n;l++){
        if (a[l][j]>sky){
            temp=1;
            break;
        }
    }
    if (temp==0){
        return true;
    }

    temp=0;
    for (int l=i-1;l>=1;l--){
        if (a[l][j]>sky){
            temp=1;
            break;
        }
    }
    if (temp==0){
        return true;
    }

    temp=0;
    for (int l=j+1;l<=m;l++){
        if (a[i][l]>sky){
            temp=1;
            break;
        }
    }
    if (temp==0){
        return true;
    }

    temp=0;
    for (int l=j-1;l>=1;l--){
        if (a[i][l]>sky){
            temp=1;
            break;
        }
    }
    if (temp==0){
        return true;
    }
    return false;

}

int main(){
    cin>>n>>m;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    sl=n*2+m*2-4;
    for (int i=2;i<n;i++){
        for(int j=2;j<m;j++){
            if(tinh(a[i][j],a,i,j,n,m)){
                sl++;
            }
        }
    }
    cout<<sl;
}
    