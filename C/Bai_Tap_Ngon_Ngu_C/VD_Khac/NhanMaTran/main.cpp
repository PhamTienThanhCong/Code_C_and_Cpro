#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k,n,x,y,s,t,i;
    int a[100][100];
    ifstream in("mat.inp");
    ofstream ou("mat.out");
    in >> k>>n>>x>>y>>s;
    for (int i=1;i<=k*n;i++)
        for (int j=1;j<=n;j++)
            in>>a[i][j];
    in.close();
    i=y;
    t=1;
    while (i<=k*n)
    {
        t=t*a[i][x];
        i=i+n;
    }
    ou << t/s;
    ou.close();
    return 0;
}
