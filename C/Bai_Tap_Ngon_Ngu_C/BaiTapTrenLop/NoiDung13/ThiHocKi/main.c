#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100][100],i,j,n,t=0;
    printf("Nhap cap Ma Tran: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
        for (j=1;j<=n;j++)
    {
        printf("a[%d][%d]= ",i,j);
        scanf("%d",&a[i][j]);
    }
    for (i=1;i<=n;i++)
        t+=a[i][i];
    printf("Ket qua duong cheo chinh la: %d",t);
}
