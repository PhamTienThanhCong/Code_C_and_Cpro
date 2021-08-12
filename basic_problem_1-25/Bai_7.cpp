#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n],sum[n],dem=0;
    for (int i=1;i<=n;i++){
        cin>>a[n];
        dem+=a[n];
        sum[i]=dem;
    }
    int max_length=1;
    for (int i=1;i<n;i++){
        if(sum[i]!=0 && dem%sum[i]==0){
            int k=2;
            for(int j=i+1;j<n;j++){
//                if (sum[j]>sum[i]*k){
//                    break;
//                }
                if(sum[j]==sum[i]*k){
                    k++;
                }
            if(sum[i]*k==dem){
                max_length=max(max_length,k);
            }
        }
    }
    }
    cout<<max_length;
}
