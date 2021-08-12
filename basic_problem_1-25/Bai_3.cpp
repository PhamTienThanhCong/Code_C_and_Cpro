    #include<bits/stdc++.h>
 
    using namespace std;
 
    int main()
    {
        int n;
        cin>>n;
        float x[n+1],y[n+1];
        for (int i=1;i<=n;i++){
            cin>>x[i]>>y[i];
        }
        float s=0,kq=0;
        for (int i=1;i<=n;i++){
            for (int j=1;j<=n;j++){
                s= sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]))/2;
                kq=max(kq,s);
            }
        }
        cout << setprecision(3) << fixed<<kq;
}