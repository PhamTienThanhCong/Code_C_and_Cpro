#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Nhapdl(char a[])
{
    int i=0;
    do
    {
        scanf("%c",a+i);
        i++;
    }
    while (a[i-1]!='\n');
    a[i-1]='\0';
}

int main()
{
    char a[100];
    printf("Ho Ten Ban: ");
    Nhapdl(a);
    printf("Ten Ban La: %s",strrchr(a,' '));
}
