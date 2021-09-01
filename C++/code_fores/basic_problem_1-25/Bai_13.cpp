#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    char a[n+1];
    for (int i=1;i<=n;i++){
        cin>>a[i];
    }
    int x=0,y=0,tt=1;
    for (int i=1;i<=n;i++){
        if (tt==1){
            if (a[i]=='G'){
                y++;
                tt=1;
            }
            if (a[i]=='B'){
                y--;
                tt=2;
            }
            if (a[i]=='L'){
                x--;
                tt=3;
            }
            if (a[i]=='R'){
                x++;
                tt=4;
            }
        }

        else if (tt==3){
            if (a[i]=='G'){
                x--;
                tt=3;
            }
            if (a[i]=='B'){
                x++;
                tt=4;
            }
            if (a[i]=='L'){
                y--;
                tt=2;
            }
            if (a[i]=='R'){
                y++;
                tt=1;
            }
        }

        else if (tt==4){
            if (a[i]=='G'){
                x++;
                tt=4;
            }
            if (a[i]=='B'){
                x--;
                tt=3;
            }
            if (a[i]=='L'){
                y++;
                tt=1;
            }
            if (a[i]=='R'){
                y--;
                tt=2;
            }
        }
        else if (tt==2){
            if (a[i]=='G'){
                y--;
                tt=2;
            }
            if (a[i]=='B'){
                y++;
                tt=1;
            }
            if (a[i]=='L'){
                x++;
                tt=4;
            }
            if (a[i]=='R'){
                x--;
                tt=3;
            }
        }
        //cout<<a[i]<<' '<<x<<' '<<y<<' '<<tt<<endl;
    }
    cout<<x<<' '<<y;
}