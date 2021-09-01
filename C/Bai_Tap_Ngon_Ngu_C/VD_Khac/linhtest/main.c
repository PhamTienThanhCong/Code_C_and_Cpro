#include <stdio.h>

int main()
{
    int n,a, b, c,d=0;
    for (n=1;n<=1000;n++)
    {
        a=n/100;
        b=(n-100*a)/10;
        c=n-100*a-10*b;
        if ((a+c==b)&&(a+b+c)%3==0){
            printf("%5d",n);
            d++;
            if (d%10==0) printf("\n");
        }
    }
}
