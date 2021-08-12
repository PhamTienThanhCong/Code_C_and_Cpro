    #include <bits/stdc++.h>
 
    using namespace std;
 
    int main()
    {
        int n,vt=0;
        double x[101],y[101],tb,tb_min=100000;
        cin>>n;
        for (int i=0;i<n;i++){
            cin>>x[i]>>y[i];
        }
        for (int i=0;i<n;i++){
            tb=0.0;
            for (int j=0;j<n;j++){
                tb+=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
            }
            if (tb_min>tb){
                tb_min=tb;
                vt=i+1;
            }
        }
    cout<<vt<<' ';
    cout << setprecision(3) << fixed<<tb_min;
}