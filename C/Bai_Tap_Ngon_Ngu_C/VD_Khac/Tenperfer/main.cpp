#include<bits/stdc++.h>

using namespace std;

bool doixung(string s,int a,int b)
{
    for (int i=a;i<=a+(b-a+1)/2;i++)
        if(s[i]!=s[b-i+a])
            return false;
    return true;
}
char s[1000];
long long i,j,t,d,k=0;;
int main()
{
    ifstream in("dulieu.inp");
    ofstream ou("dulieu.out");
    i=0;
    do {
        cin>>s[i];
        k++;
        i++;
    }
    while ((s[i-1]>'a')&&(s[i-1]<'z'));
    for (i=0;i<k-2;i++)
        for (j=i+2;j<k;j++)
            if (doixung(s,i,j)) {
                ou<<"YES";
                return 0;
    }
    ou<<s[2];
    in.close();
    ou.close();
    return 0;
}
