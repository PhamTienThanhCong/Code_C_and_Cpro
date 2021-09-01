#include <stdio.h>
#include <stdlib.h>

int a[13],i;

void Nhap()
{
    for (i=1;i<=12;i++)
    {
        printf("Nhap Luong Mua Thang %d: ",i);
        scanf("%d",&a[i]);
    }
}

void Xuat(int a[])
{
    printf("+-------+--------------+\n");
    printf("| Thang |   Luong Mua  |\n");
    for (i=1;i<=12;i++)
        printf("|  %2d   |      %4d    |\n",i,a[i]);
    printf("+-------+--------------+\n");
}

int main()
{
    Nhap();
    Xuat(a);
}
