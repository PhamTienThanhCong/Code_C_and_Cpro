#include <stdio.h>
#include <stdlib.h>
int a,b,c;
int main()
{
    int a,b,c;
    int *p;
    printf("nhap so a: ");
    scanf("%d",&a);
    printf("nhap so b: ");
    scanf("%d",&b);
    printf("nhap so c: ");
    scanf("%d",&c);
    p=&a;
    printf("cho den a=%d\n",*p);
    p=&b;
    printf("cho den b=%d\n",*p);
    p=&c;
    printf("cho den c=%d\n",*p);
    return 0;
}
