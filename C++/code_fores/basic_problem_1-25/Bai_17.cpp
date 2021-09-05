#include<bits/stdc++.h>

using namespace std;

void change(int *a, int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
    
}

int main(){
    int n,x[101],y[101];
    cin>>n;
    for (int i=1;i<=n;i++){
        cin>>x[i]>>y[i];
    }
    for (int i=1;i<=n;i++){
        for (int j=i;j<=n;j++){
            if (y[i]>y[j]){
                change(x+i,x+j);
                change(y+i,y+j);
            }
        }
    }
    int Y_way;
    Y_way=int(float(n)/2+0.5);
    Y_way=y[Y_way];

    int sum=0;
    for (int i=1;i<=n;i++){
        sum = sum + max(Y_way,y[i])-min(Y_way,y[i]);
    }
    cout<<sum;
}