#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Nhapdl(char a[])
{
    int i=1;
    do
    {
        scanf("%c",a+i);
        i++;
    }
    while (a[i-1]!='.');
    a[0]=' ';
}

int demt(char a[])
{
    int i,dem=0;
    for (i=0;i<strlen(a)-2;i++)
        if (a[i]==32&&a[i+1]!=32)
            dem++;
    return dem;
}
int main()
{
    char a[100];
    printf("\tCHUONG TRINH DEM CHU TRONG CAU\n");
    printf("Nhap Xau: ");
    Nhapdl(a);
    printf("So Luong Chu TRong cau la: %d",demt(a));
    return 0;
}
