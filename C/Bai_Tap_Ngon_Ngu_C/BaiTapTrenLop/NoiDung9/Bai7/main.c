#include<stdio.h>

int bcnn(int a,int b)
{
    int c,d;
    c=a;d=b;
        while(a!=b)
            if (a<b) b=b-a;
                else a=a-b;
        return d*(c/a);
}
int main()
{
        int a,b;
        printf("Nhap Hai So a,b: ");
        scanf("%d%d",&a,&b);
        printf("BCNN: %d",bcnn(a,b));
}
