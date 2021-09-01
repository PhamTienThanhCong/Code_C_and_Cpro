#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,temp;
    cin>>n;
    int a[(n+1)*(n+1)];
    for (int i=1;i<=n*n;i++)
        cin>>a[i];
    for (int i=1;i<n*n;i++){
        for (int j=i;j<=n*n;j++){
            if (a[i]>=a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    //a
    int row=1;
    for (int i=1;i<=row*n;i++){
                cout<<a[i]<<' ';
            }
    cout<<endl;
    row++;
    while(row<=n){
        if (row%2==1){
            for (int i=(row-1)*n+1;i<=row*n;i++){
                cout<<a[i]<<' ';
            }
        }
        if (row%2==0){
            for (int i=row*n;i>(row-1)*n;i--){
                cout<<a[i]<<' ';
            }
        }
        row++;
        cout<<endl;
    }
    //b
    for (int i=0;i<n;i++){
        row=1;
        for (int j=n;j>=1;j--){
            if (j%2==1){
                cout<<a[n*j-i]<<' ';
            }
            if (j%2==0){
                cout<<a[n*j+i-n+1]<<' ';
            }
        }
        cout<<endl;
    }
    //c
    int b[n][n],t=0;
    row=1;
    int i_run=1,j_run=1,i,j,coun=1;
    while (t<n*n){
        if (row==1){
            for (j=coun;j<=n-coun+1;j++){
                t++;
                b[i_run][j]=a[t];
            }
            j_run = j-1;
        }
        if (row==2){
            for (i=coun+1;i<=n-coun+1;i++){
                t++;
                b[i][j_run]=a[t];
            }
            i_run=i-1;
        }
        if (row==3){
            for (j=n-coun;j>=coun;j--){
                t++;
                b[i_run][j]=a[t];
            }
            j_run = j+1;
        }
        if (row==4){
            coun++;
            for (i=n-coun+1;i>=coun;i--){
                t++;
                b[i][j_run]=a[t];
            }
            i_run=i+1;
        }
        row++;
        if (row>4)
            row=1;

    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++)
            cout<<b[i][j]<<' ';
        cout<<endl;
    }
    //d
    t=1;coun=2;
    i_run=1;
    while (coun<=n*2){
        if (coun<=n+1){
            for (i=1;i<coun;i++){
                if (coun%2==1){
                    b[i][coun-i]=a[t];
                }
                if (coun%2==0){
                    b[coun-i][i]=a[t];
                }
                t++;
            }
        }
       if (coun>n+1){
            i_run++;
            for (j=i_run;j<=n;j++){
                if (coun%2==1){
                    b[j][coun-j]=a[t];
                }
                if (coun%2==0){
                    b[coun-j][j]=a[t];
                }
                t++;
            }
       }

        coun++;
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++)
            cout<<b[i][j]<<' ';
        cout<<endl;
        }
}
