#include<bits/stdc++.h>

using namespace std;

bool KiemTra(int vt,string a,string b){
    string b_tach="";
    for (int i=vt;i<vt+a.length();i++){
        b_tach+=b[i];
    }
    if (b_tach==a){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n,x,leng=100;
    string b,a;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>x;
        b=b+char(x+48);
    }
    for (int i=0;i<=b.length()/2;i++){
        a+=b[i];
        int dem=1;
        if (b.length()%a.length()==0){
            for (int j=i+1;j<b.length()-i;j=j+i+1){
                if (KiemTra(j,a,b)==true){
                    dem++;
                }
                else{
                    dem=1;
                    break;
                }
            }
            if (dem!=1 ){
                if (leng>a.length()){
                    leng=a.length();
                }
            }
        }
    }
    cout<<leng;
}