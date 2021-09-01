#include <stdio.h>
#include <stdlib.h>

int i,n,a[11],Tong=0;

void Nhapdl()
{
    do {
    printf("Nhap N: ");
    scanf("%d",&n);
    if (n<1||n>10)
        printf("Nhap Sai(Dieu Kien n<10)\n");
    }
    while (n<1||n>10);
    printf("\nNhap %d Chu So: ",n);
    for (i=1;i<=n;i++)
        scanf("%d",&a[i]);
}

void TinhCucDai()
{
    for (i=2;i<n;i++)
        if (a[i]>a[i-1] && a[i]>a[i+1])
            Tong+=a[i];
}

int main()
{
    Nhapdl();
    TinhCucDai();
    printf("Tong Cuc Dai Dia Phuong: %d",Tong);
    return 0;
}
