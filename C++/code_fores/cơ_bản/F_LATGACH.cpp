#include <bits/stdc++.h>
#include <string>

using namespace std;

// long int Fibonaxi(int n)
// {
//     if (n == 1 || n == 2)
//         return 1;
//     return Fibonaxi(n - 1) + Fibonaxi(n - 2);
// }

// long long int test;
// int t,maxsize=0,a[101],i;

// void fibonaxi(unsigned long long int fbc[],int cs,int n){
//     for (int i = cs+1; i<=n ;i++){
//         fbc[i] = fbc[i-1] + fbc[i-2];
//     }
// }

string cong(string a,string b){
    int size_a=a.size();
    int size_b=b.size();
    int Nho=0,tong;
    string kq="";
    while(true){
        if (size_a == 0){
            size_a++;
            a[0]='0';
        }
        if (size_b == 0){
            size_b++;
            b[0]='0';
        }
        size_a--;
        size_b--;
        tong=int(a[size_a])+int(b[size_b])+Nho-48*2;
        if (tong>9){
            Nho=1;
            tong=tong-10;
        }
        else{
            Nho=0;
        }
        kq=char(tong+48)+kq;
        if (size_b==0 && size_a==0 && Nho==0){
            return kq;
        }
    }
}

string fbc[101];

int main()
{
    int a[100],i,t;
    cin>>t;
    fbc[0]="1"; fbc[1]="1";
    for (i=2;i<=100;i++){
        fbc[i] = cong(fbc[i-1],fbc[i-2]);
    }
    for (i=1;i<=t;i++){
        cin>>a[i];
    }
    for (i=1;i<=t;i++){
        cout<<fbc[a[i]]<<endl;
    }
}