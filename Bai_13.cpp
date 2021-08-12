#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    char r;
    int x=0,y=0,Huong=0,x_old,y_old;
    for (int i=1;i<=n;i++){
        cin >> r;
        if (r=='G'){
            x_old=x;
            y_old=y;
            y++;
        }
        else if (r=='L'){
            x_old=x;
            y_old=y;
            x--;
        }
        else if (r=='R'){
            x_old=x;
            y_old=y;
            x++;
        }
        else if (r=='B'){
            x=x_old;
            y=x_old;
        }
    }
    cout<<x<<' '<<y;
}