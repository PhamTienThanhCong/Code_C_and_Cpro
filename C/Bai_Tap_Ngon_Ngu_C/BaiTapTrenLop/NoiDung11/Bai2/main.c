#include <stdio.h>
#include <stdlib.h>

void change(int *a,int *b,int *c)
{
    int p;
    p=*a;
    *a=*b;
    *b=*c;
    *c=p;
}
int main()
{
    int a,b,c;
    printf("nhap gia tri a,b,c: ");
    scanf("%d%d%d",&a,&b,&c);
    change(&a,&b,&c);
    printf("Gia Tri Sau Khi Xoay Vong: %d %d %d",a,b,c);
    return 0;
}
