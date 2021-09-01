#include <stdio.h>
#include <stdlib.h>

//Ham Gan Gia Tri Max
double *maximum(double *a[], int size)
{
    int i,*max=a;
    for (i=1;i<size;i++)
        if (*max<*(max+i)) *max=*(max+i);
    //so sanh cac gia tri voi max
    return max;
}
int main()
{
    int n,a[100],i;
    int *p;
    printf("nhap size mang: ");
    scanf("%d",&n);
    if (n==0) return NULL;//ket thuc khi mang giong
    //Nhap Mang
    for (i=0;i<n;i++)
    {
        printf("Nhap Phan Tu Thu %d: ",i+1);
        scanf("%d",a+i);
    }
    //Gan Gia Tri Con Tro P Voi Con Tro Max
    p=maximum(&a,n);
    printf("Phan Tu Lon Nhat La: %d",*p);
}
