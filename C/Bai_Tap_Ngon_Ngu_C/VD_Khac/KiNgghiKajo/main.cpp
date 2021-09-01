#include<bits/stdc++.h>

using namespace std;

int n,a[10000][10000];
int main()
{
    ifstream in("dulieu.inp");
    ofstream ou("dulieu.out");
    in>>n;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=3;j++)
            in>>a[i][j];

    in.close();
    ou.close();
}
