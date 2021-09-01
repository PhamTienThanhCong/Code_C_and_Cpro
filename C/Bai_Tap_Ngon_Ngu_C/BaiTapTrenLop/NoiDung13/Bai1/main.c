#include <stdio.h>
#include <stdlib.h>
//Nhap Du Lieu Va Dem
int Nhapkt(char a[])
{
    int i=0,dem=0;
    do
    {
        scanf("%c",a+i);//nhap du lieu
        i++;
        if (a[i-1]==32)//dem du lieu
            dem++;
    }
    while (a[i-1]!='\n');
    return dem;
}
int main()
{
    char a[100];
    int t;
    printf("Nhap Xau: ");
    t=Nhapkt(a);
    printf("So Luong Ki Tu Trang: %d",t);
    return 0;
}
