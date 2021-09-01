#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int d,t=0;
    ifstream in("dulieu.inp");
    ofstream ou("dulieu.out");
    getline(in,s);
    for (int i=0;i<s.length();i++)
    {
        d=int(s[i])-48;
        if (d%2!=0) t++;
    }
    ou<<t;
    ou.close();
    in.close();
    return 0;
}
