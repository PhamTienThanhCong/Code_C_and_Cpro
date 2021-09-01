#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char a[100];
    printf("Nhap So Luong chu: ");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%c",a+i);
        scanf("%c",a+i);
    }
    for (int i=0;i<n;i++)
        if (a[i]>='a' && a[i]<='z')
            printf("%c\n",a[i]-32);
        else if (a[i]>='A' && a[i]<='Z')
            printf("%c\n",a[i]+32);
    return 0;
}
