#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a[100]={0},i;
    char s[100];
    printf("Nhap Xau: ");
    fgets(s,100,stdin);
    for (i=0;i<strlen(s);i++)
        a[s[i]]++;
    printf("%c: %d\n",'a',a['a']);
    printf("%c: %d\n",'e',a['e']);
    printf("%c: %d\n",'i',a['i']);
    printf("%c: %d\n",'u',a['u']);
    printf("%c: %d\n",'o',a['o']);
    return 0;
}
