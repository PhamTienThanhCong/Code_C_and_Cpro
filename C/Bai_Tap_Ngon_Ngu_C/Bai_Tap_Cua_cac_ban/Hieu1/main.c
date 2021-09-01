#include <stdio.h>
#include <stdlib.h>
int a;
int snt(int a)
{
    for (int i=2;i<=sqrt(a);i++)
        if (a%i==0) return 0;
    return 1;
}
int main()
{
    printf("Nhap So: ");
    scanf("%d",&a);
    printf("tsnt cua %d: ",a);
    while (a>1)
    {
        while (a%2==0)
        {
            printf(" %d",2);
            a=a/2;
        }
        if (snt(a)==1)
        {
            printf(" %d",a);
            a=a/a;
        }
        while (a%3==0)
        {
            printf(" %d",3);
            a=a/3;
        }
    }
}
