#include <stdio.h>
#include <stdlib.h>

//int kt(int a[],int n)
//{
//    int i;
//    for (i=1;i<n;i++)
//        if (a[i]!=a[n-i]) return 0;
//        return 1;
//}
int main()
{
    char a[100],i,n=0;
    printf("Nhap Day: ");
    do
        scanf("%c",&a[++n]);
    while (a[n]!='\n');

    for (i=1;i<n;i++)
        if (a[i]!=a[n-i]) {
            printf("khong phai palindrome\n");
            return 0;
        }
    printf("palindrome\n");

    return 0;
}
