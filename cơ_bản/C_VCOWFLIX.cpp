#include <bits/stdc++.h>

using namespace std;

int sum, kq, c, n;
int a[17]; 

void dequy(int i){
   int j;
   sum=sum+a[i];
   if (sum<=c){
        if (kq<sum){ 
            kq=sum;
        }
        for (j=i+1; j<=n; j++){ 
            dequy(j);
        }
    }        
   sum=sum-a[i]; 
}

int main(){    
    cin>>c>>n; 
    for (int i=1; i<=n; i++) 
        cin>>a[i];
    kq=sum=0;
    a[0]=0;
    dequy(0);
    cout<<kq;
}
 