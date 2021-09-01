#include <stdio.h>
#include <stdlib.h>

int a[1000],n=0,i,j;
int snt(int a)
{
    int i;
    for (i=2;i<=sqrt(a);i++)
        if (a%i==0) return 0;
    return 1;
}
void nhapdl()
{
    printf("Nhap Day So Bat Ki: ");
    do
        scanf("%d",&a[++n]);
    while (a[n]>=0);
}
void xuatdl(int a[],int n)
{
    printf("day so co %d phan tu: ",n-1);
    for (i=1;i<n;i++)
        printf("%d ",a[i]);
}
int main()
{
    nhapdl();
    //Bai1
    printf("\nBai 1:\n");
    xuatdl(a,n);
    //Bai2
    i=0;
    printf("\nBai 2:\n");
    while (i<n)
    {
        i++;
        if (a[i]%2!=0)
        {
            for (j=n;j>i;j--)
                a[j]=a[j-1];
            n++;
            a[i+1]=0;
        }
    }
    xuatdl(a,n);

    //Bai3
    printf("\nBai 3: \n");
    i=0;
    while (i<n)
    {
        i++;
        if (a[i]>=1)
        if (snt(a[i]))
        {
            for (j=i;j<n;j++)
                a[j]=a[j+1];
            n--;
            i--;
        }
    }
    xuatdl(a,n);
    return 0;
}
