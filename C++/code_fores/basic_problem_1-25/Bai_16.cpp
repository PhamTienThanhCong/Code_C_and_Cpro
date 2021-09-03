#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,a[1001],Tong=0;
    cin>>n;
    for (int i=1;i<=n;i++){
        cin>>a[i];
        Tong+=a[i];
    }
    int tg;
    for(int i = 1; i <= n - 1; i++){
        for(int j = i + 1; j <= n; j++){
            if(a[i] < a[j]){
                // Hoan vi 2 so a[i] va a[j]
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
    }
    int i=1,dem=0;
    tg = a[i]+a[i+1]+a[i+2];
    while (Tong-tg-tg<0){
        //cout<<i<<' '<<a[i]<<' '<<tg<<' '<<Tong<<endl;
        dem++;
        Tong = Tong-a[i];
        i++;
        tg = a[i]+a[i+1]+a[i+2];
        if (n-i<6 || Tong<=3){
            dem=-1;
            break;
        }
    }
    cout<<dem;
}