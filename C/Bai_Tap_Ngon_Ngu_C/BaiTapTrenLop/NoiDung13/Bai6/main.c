#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void MaHoa(char s[],int k)
{
    int i;
    for (i=0;i<strlen(s)-1;i++)
        if (s[i]+k<='z')
            s[i]=s[i]+k;
        else s[i]=s[i]-26+k;
}

int main()
{
    char s[100];
    int k;
    printf("Nhap Chu Cai Ma Hoa: ");
    fgets(s,100,stdin);
    printf("Nhap So Ma Hoa: ");
    scanf("%d",&k);
    MaHoa(s,k);
    printf("Day Sau Khi Ma Hoa: %s",s);
    return 0;
}
