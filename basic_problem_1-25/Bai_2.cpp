#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,dem[1000]={0};
    long int a,b[1000];
    cin >> n;
    int d = 0;
    for (int i=0;i<n;i++){
        cin >> a;
        int team = 0;
        for (int j=0;j<d;j++){
            if (b[j]==a){
                team++;
                dem[j]++;
                break;
            }
        }
        if (team==0){
            b[d]=a;
            dem[d]=1;
            d++;
        }
    }
    cout<<d<<endl;
    for (int i=0;i<d-1;i++){
        for (int j=i+1;j<d;j++){
            if (b[i]>b[j]){
                a=b[i];
                b[i]=b[j];
                b[j]=a;
                a=dem[i];
                dem[i]=dem[j];
                dem[j]=a;
            }
        }
        cout<<b[i]<<' '<<dem[i]<<endl;
    }
    cout<<b[d-1]<<' '<<dem[d-1]<<endl;
}