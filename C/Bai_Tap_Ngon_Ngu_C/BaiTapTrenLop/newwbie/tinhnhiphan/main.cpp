#include <iostream>
#include <string>

using namespace std;

int main()
{
    float a;
    int b;
    string kq;
    kq="";
    cout << "Nhap: ";
    cin >> a;
    b=int(a);
    a=a-float(b);
    while (b>0){
        if (b%2==0)
            kq="0"+kq;
        else kq="1"+kq;
        b=b/2;
    }
    if (a!=0) {
        kq=kq+".";
        while (a!=1)
        {
            a=a*2;
            if (a>1.0){
                a=a-1;
                kq=kq+'1';
            }
            else if (a==1){
                kq=kq+'1';
            }
            else kq=kq+'0';
        }
    }
    cout << "kq: "<<kq;
    return 0;
}
