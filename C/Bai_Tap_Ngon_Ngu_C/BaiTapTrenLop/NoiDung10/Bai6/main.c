#include <stdio.h>
#include <stdlib.h>

int a[10000],b[10000],i,n1,n2;

void Nhapdl()
{
    printf("Nhap So Luong Ki Tu Cua Mang thu nhat: ");
    scanf("%d",&n1);
    printf("\nNhap Mang thu nhat(%d ki tu): ",n1);
    for (i=1;i<=n1;i++)
        scanf("%d",&a[i]);
    printf("Nhap So Luong Ki Tu Cua Mang thu hai: ");
    scanf("%d",&n2);
    printf("\nNhap Mang thu Hai(%d ki tu): ",n2);
    for (i=1;i<=n2;i++)
        scanf("%d",&b[i]);
}

int kt(int a[],int b[],int n1,int n2)
{
    if (n1!=n2) return 0;
    for (i=1;i<=n1;i++)
        if (a[i]!=b[i])
            return 0;
    return 1;
}

int main()
{
    Nhapdl();
    if (kt(a,b,n1,n2)==1)
        printf("\n1 =>Hai Mang Bang Nhau");
    else printf("\n0 =>Hai Mang Khac Nhau");
}
