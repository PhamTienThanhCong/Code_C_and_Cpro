    #include<bits/stdc++.h>
 
    using namespace std;
    
    float DuongKinhMoi(float x1,float y1,float x2,float y2,float x3,float y3,float c){
        float a,b,p,s;
        c=c*2;
        a=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
        b=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
        p=(a+b+c)/2;
        s=sqrt(p*(p-a)*(p-b)*(p-c));
        s=(a*b*c)/(4*s);
        return s;
    }
    int main()
    {
        int n;
        cin>>n;
        float x[n+1],y[n+1],x_poin,y_poin,x1,x2,y1,y2;
        for (int i=1;i<=n;i++){
            cin>>x[i]>>y[i];
        }
        float s=0,kq=0;
        for (int i=1;i<=n;i++){
            for (int j=1;j<=n;j++){
                s= sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]))/2;
                if (kq<s){
                    kq=s;
                    x1=x[i];    x2=x[j];
                    y1=y[i];    y2=y[j];
                }
            }
        }
        int dem=0;
        x_poin = (x1+x2)/2;
        y_poin = (y1+y2)/2;
        for (int i=1;i<=n;i++){
            if ((sqrt((x_poin-x[i])*(x_poin-x[i])+(y_poin-y[i])*(y_poin-y[i])))>kq){
                kq = DuongKinhMoi(x1,y1,x2,y2,x[i],y[i],kq);
                break;
            }
        }
        cout << setprecision(3) << fixed<<kq;
}