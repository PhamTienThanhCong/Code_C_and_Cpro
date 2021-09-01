#include <stdio.h>
#include <stdlib.h>

int gtgn(float a[],int n)
{
    int i,d=0;
    float *p=a,tbc=0;
    for (i=0;i<n;i++)
        tbc+=*(p+i);
    tbc=tbc/(float)n;
    float min;
    min=tbc-a[0];
    for (i=0;i<n;i++)
        if (abs(tbc-a[i])<min) {
            min=tbc-a[i];
            d=i;
        }
    return d;
}
int main()
{
    int i,n;
    float a[10000];
    printf("Nhap size mang: ");
    scanf("%d",&n);
    printf("Nhap Mang %d Ki Tu:",n);
    for (i=0;i<n;i++)
        scanf("%f",a+i);
    printf("gia tri gan nhat voi tbc la: %g",a[gtgn(a,n)]);
}
