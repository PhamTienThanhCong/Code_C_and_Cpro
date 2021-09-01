#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a[29];
char s[200];
//Bai 3
void inmang()
{
    for (char i='a';i<='z';i++)
        a[i]=0;
    for (int i=0;i<=strlen(s);i++)
        a[s[i]]++;
    for (int i='a';i<='z';i++)
        if (a[i]>0)
            printf("%d %c\n",a[i],i);
}
//Bai4
void KT()
{
    int max=a['a'],cs='a';
    for (char i='a';i<='z';i++)
        if (a[i]>max) {
                max=a[i];
                cs=i;}
    printf("%d %c",max,cs);
}
//BAi5
void Bai5()
{
    for (int i=0;i<strlen(s)-1;i++)
    if (i%2==0) printf("%c",(char)((int)s[i]-32));
    else printf("%c",s[i]);
}
void main()
{
    printf("Nhap Ten: ");
    fgets(s,200,stdin);
    printf("\nBai3: \n");
    inmang();
    printf("\nBai4: ");
    KT();
    printf("\nBai5: ");
    Bai5();
    return 0;
}
