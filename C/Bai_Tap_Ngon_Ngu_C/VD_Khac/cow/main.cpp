#include <bits/stdc++.h>

using namespace std;
int Tinh(int a,int b,int r,int x, int y)
{
    int Tong;
    float KQ;
    Tong=(a-x)*(a-x)+(b-y)*(b-y);
    KQ=sqrt(Tong);
    if (KQ==int(KQ)) return int(KQ)-r-1;
        else return int(KQ)-r;
}
int main()
{
    long n,a,b,m;
    ifstream f1("cow.int");
    ofstream f2("cow.out");
    long t[101],x[101],y[101],r[101];
    f1>>n>>a>>b;
    for (int i=1;i<=n;i++)
        f1>>x[i]>>y[i]>>r[i];
    m=0;
    for (int i=1;i<=n;i++)
    {
        t[i]=Tinh(x[i],y[i],r[i],a,b);
        if (t[i]>m) m=t[i];
    }
    f2<<m;
    f1.close();
    f2.close();
    return 0;
}
