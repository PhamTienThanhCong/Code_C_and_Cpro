#include <stdio.h>
#include <stdlib.h>

int a[11],n,i;

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
    printf("\nDay Vua Nhap: ");
    for (i=1;i<=n;i++)
        printf("%d ",a[i]);
}

void TinhToan(int a[],int n)
{
    int tongso,so0;
    float tbc,dem;
    tongso=so0=0;
    tbc=dem=0;
    for (i=1;i<=n;i++)
    {
        if (a[i]>0) tongso+=a[i];
        else if (a[i]<0) {
            tbc+=(float)a[i];
            dem++;
        }
        else so0++;
    }
    printf("\nTong Cac So Duong: %d\n",tongso);
    if (dem==0) printf("Khong So So am\n");
    else printf("Trung Binh Cong Cac So Am: %f\n",tbc/dem);
    printf("Tong Cong Co %d so 0\n",so0);
}

void Them()
{
    int x,d=0;
    printf("Nhap x: ");
    scanf("%d",&x);
    for (i=1;i<=n;i++)
        if (a[i]==x) {
                printf("vi tri %d co so giong %d",i,x);
                d++; }
    if (d==0) printf("Khong Co So Nao Giong %d ",x);
}
int main()
{
    Nhapdl();
    TinhToan(a,n);
    Them();
}
