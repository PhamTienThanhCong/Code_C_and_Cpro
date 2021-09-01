#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b,dem,i,j,KT;
 scanf("%d%d",&a,&b);
 dem=0;
 for(i=a;i<=b;i++)
{
    KT=0;
    for(j=2;j<=i-1;j++)
        if(i%j==0)
        KT++;
        if(KT==0)
            dem++;
}
 printf("%d",dem);

}
