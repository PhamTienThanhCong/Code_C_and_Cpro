    #include<bits/stdc++.h>
 
    using namespace std;
 
    int main()
    {
        int n,s,k;
        cin>>n>>s;
        cin>>k;
        int a[n+1],d=n,run=s,i;
//a
        for (i=1;i<=n;i++)
            a[i]=1;
        i=0;
        while (d>1){
            i++;
            if (i>n)
                i=1;
            if (a[i]==1){
                run--;
            }
            if (run==0){
                if (a[i]==1){
                    a[i]=0;
                    run=s;
                    d--;
                }
            }
 
        }
        int kq;
        for (i=1;i<=n;i++)
            if (a[i]==1)
                kq=i;
        cout<<kq<<endl;
//b
    int check=k-kq;
    if (check>0)
        cout<<check+1;
    else
        cout<<check+n+1;
 
}