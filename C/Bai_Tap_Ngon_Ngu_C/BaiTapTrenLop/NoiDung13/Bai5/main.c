#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void change(char s[],char a, char b)
{
    int i=0;
    while (s[i]!='\n')
    {
        if (s[i]==a) s[i]=b;
        i++;
    }
}
int main()
{
    char s[101],a,b;
    printf("CHUONG TRINH DOI CHU CAI\n");
    printf("Nhap Xau: ");
    fgets(s,100,stdin);
    printf("Nhap Ki Tu Thu Nhat: ");
    scanf("%c",&a);
    printf("Nhap Ki Tu Thu Hai: ");
    scanf("%c",&b);
    scanf("%c",&b);
    change(s,a,b);
    printf("ket Qua Khi Thay Doi:%s ",s);
    return 0;
}
