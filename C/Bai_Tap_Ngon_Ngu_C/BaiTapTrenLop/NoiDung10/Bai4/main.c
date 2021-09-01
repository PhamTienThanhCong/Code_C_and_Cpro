#include<stdio.h>
#include<stdlib.h>

int n,a[11],i,b[11],c[11];
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

int csd=0,csa=0; //chi so
void copy()
{
    for (i=1;i<=n;i++)
        if (a[i]>1)
    {
        csd++;
        b[csd]=a[i];
    }
    else {
        csa++;
        c[csa]=a[i];
    }
}

void intkq()
{
    printf("\nmang b(so duong): ");
    for (i=1;i<=csd;i++)
        printf("%d ",b[i]);
    printf("\nmang c(So Am): ");
    for (i=1;i<=csa;i++)
        printf("%d ",c[i]);
}

void main()
{
    Nhapdl();
    copy();
    intkq();
}
