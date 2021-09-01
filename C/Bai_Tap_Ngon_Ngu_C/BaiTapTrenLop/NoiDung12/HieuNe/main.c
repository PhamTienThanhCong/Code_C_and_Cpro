#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Ham1(int a[],int *n)
{
    int i=1;
    printf("nap mang ki tu:\n");
    do{
        *n=i;
        scanf("%d",&a[i]);
        i++;
    }
    while (a[i-1]>=0);
}
void Ham2(int a[],int *n)
{
    int j=1,i=1;
    while (i<*n){
        if (a[i]%2==0) {
            for (j=i;j<*n-1;j++)
                a[j]=a[j+1];
            *n=*n-1;
            }
        else i++;
    }
}
int Ham3(char a[],char c)
{
    int i,tong=0;
    for (i=0;i<strlen(a);i++)
        if (a[i]==c) tong++;
    return tong;
}
int main()
{
    printf("Ham 1:\n");
    int a[100],i=1,n;
    Ham1(a,&n);
    printf("So Luong Phan Tu %d \nDo la: ",n-1);
    for (i=1;i<n;i++)
        printf("%d ",a[i]);
    printf("\n----------------------------------\n");
    printf("Ham 2:\n");
    Ham2(a,&n);
    printf("So Luong Phan Tu %d \nDo la: ",n-1);
    for (i=1;i<n;i++)
        printf("%d ",a[i]);
    printf("\n----------------------------------\n");
    char s[100],c;
    printf("Ham 3:\n");
    printf("Nhap xau string: ");
    fgets(s,100,stdin);
    fgets(s,100,stdin);
    s[strlen(s)-1]='\0';
    printf("Nhap Ki Tu: ");
    fflush(stdin);
    scanf("%c",&c);
    n=Ham3(s,c);
    printf("so lan xuat hien la: %d",n);
    printf("\n----------------END---------------\n");
    return 0;
}
