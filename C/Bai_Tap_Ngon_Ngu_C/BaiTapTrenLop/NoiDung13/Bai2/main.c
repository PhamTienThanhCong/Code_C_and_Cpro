#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Nhap Du Lieu
void Nhapdl(char a[])
{
    int i=0;
    do
    {
        scanf("%c",a+i);
        i++;
    }
    while (a[i-1]!='\n');
}
//chuan hoa day
void repace(char a[])
{
    int i=0,n,j;
    n=strlen(a);
    a[n-1]='\0';
    while (i<n)
    {
        if (a[i]==a[i+1]&&a[i]==32)
        {
            n--;
            //doi cho cac xau
            for (j=i;j<n;j++)
                a[j]=a[j+1];
            i--;
        }
        i++;
    }
}
int main()
{
    char a[100];
    printf("\t\tCHUAN HOA XAU\n");
    printf("\tNhap Day So: ");
    Nhapdl(a);
    repace(a);
    printf("\tDay So Sau Khi Chuan hoa:\n\t%s",a);
    return 0;
}
