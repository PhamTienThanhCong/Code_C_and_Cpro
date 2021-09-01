#include <stdio.h>
#include <stdlib.h>

void change(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}


int main()
{
    int a[3];
    printf("Hello world!\n");
    scanf("%d %d",a+1,a+2);
    change(a+1,a+2);
    printf ("%d %d",a[1],a[2]);
}
