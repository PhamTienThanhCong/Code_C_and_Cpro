#include <stdio.h>
#include <stdlib.h>
//dao day bang chi so
void cach1(int a[],int n)
{
    int i;
    printf("\nDao Nguoc Day Bang Chi So:\n");
    for (i=n-1;i>=0;i--)
        printf("%d ",a[i]);
}
//dao day bang con tro
void cach2(int a[],int n)
{
    int i,*mang=a;
    printf("\nDAo Nguoc Mang Bang Con Tro:\n");
    for (i=0;i<n;i++)
        printf("%d ",*(mang+n-i-1));
}
int main()
{
    int n,a[100],i;
    printf("nhap size day: ");
    scanf("%d",&n);
    printf("Nhap day %d Chu So: ",n);
    for (i=0;i<n;i++)
        scanf("%d",a+i);
    cach1(a,n);
    printf("\n----------------------------------------");
    cach2(a,n);
}
