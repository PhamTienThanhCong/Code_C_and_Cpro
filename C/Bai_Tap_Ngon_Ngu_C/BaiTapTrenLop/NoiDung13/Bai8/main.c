#include <stdio.h>
#include <stdlib.h>

void in(char s[],int d[])
{
    char j;
    for (j='0';j<='9';j++)
        if (d[j]>0)
            printf("%c Xuat Hien: %d Lan\n",j,d[j]);
    for (j='a';j<='z';j++){
        if (d[j]>0)
            printf("%c Xuat Hien: %d Lan\n",j,d[j]);
        if (d[j-32]>0)
            printf("%c Xuat Hien: %d Lan\n",j-32,d[j-32]);
    }
}
int main()
{
    int d[256]={0},i=0;
    char s[256];
    printf("CHUONG TRINH IN TAN XUAT XUAT HIEN CUA MOI KI TU\n");
    printf("Nhap day chu: ");
    do
    {
        scanf("%c",s+i);
        if (s[i]!='\n'&&s[i]!=32)
            d[s[i]]++;
        i++;
    }
    while (s[i-1]!='\n');
    printf("TAn So Xuat Hien cua Dau vua Nhap la:\n");
    in(s,d);
    return 0;
}
