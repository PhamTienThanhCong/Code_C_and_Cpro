#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,a[100],b;
    ifstream in("tri.inp");
    in>>n>>k;
    for (int i=1;i<=n;i++)
        in>>a[i];
    for (int i=1;i<=n-k+1;i++)
    {
        int t=0;
        for (int j=i;j<=(i+k-2)/2;j++)
            if ((a[j]<a[j+1]) & (a[k+i]-j)>a[k+i-j-1]) t++;
    cout << t;
    }
    return 0;
}
