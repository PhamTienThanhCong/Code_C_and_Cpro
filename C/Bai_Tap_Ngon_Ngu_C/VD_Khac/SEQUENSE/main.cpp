#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long a[1000001],n,m,rmax[100001],lmax[100001];
int main()
{
    long long n;
    cin >> n;
    for (int i=1;i<=n ;i++)
        cin >> a[i];
    m=-1e+12;

    rmax[n]=a[n];
    for (int i=n-1;i>=1;i--)
        rmax[i]=max(rmax[i+1],a[i]);

    lmax[1]=a[1];
    for (int i=2;i<=n;i++)
        lmax[i]=max(lmax[i-1],a[i]);

//    for (int i=1;i<=n;i++)
//        cout << lmax[i]<<" ";
    for (int i=2;i<n;i++)
    {
        m=max(m,lmax[i-1]+2*a[i]+3*rmax[i+1]);
    }

    cout << m;
    return 0;
}
