#include<bits/stdc++.h>

using namespace std;

bool snt(int a)
{
    if ((a<=3)&&(a>1))
        {
            return true;
        }
    for (int i=2;i<=sqrt(a);i++)
        if (a%i==0) return false;
    return true;
}

long a,d;
int main()
{
    d=0;
    cin>>a;
    for (int i=1;i<a;i++)
        if (snt(i))
            for (int j=i;j<=a;j++)
                if (snt(j))
                    if (i+j==a)
                    {
                        d++;
                        break;
                    }
    cout<<d;
}
