#include <stdio.h>
#include <stdlib.h>

int main()
{
    float e,d,n,pi=1;
    int i,t=1;
    printf("Nhap E? ");
    scanf("%f",&e);
    d=(1-e)/(e*2);
    n=(int)d;
    for (i=3;i<=n+1;i+=2)
    {
        if(t%2!=0) pi=pi-(float)1/(float)i;
            else pi=pi+(float)1/(float)i;
        t++;
    }
    printf("%.2f",pi*4);
    return 0;
}
