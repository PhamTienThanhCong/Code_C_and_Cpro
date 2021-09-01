#include <stdio.h>
#include <stdlib.h>

//Tim So Lon Nhat Trong Ma Tran
int main()
{
    int a[100][100];
    int n,i,j;
    printf("Nhap Cap Cua Ma Tran: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
        for (j=1;j<=n;j++)
    {
            printf("s[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
    }
    int max=a[1][1];
    for (i=1;i<=n;i++)
        for (j=1;j<=n;j++)
            if(a[i][j]>max)
                max=a[i][j];
    printf("So Lon Nhat Trong Ma Tran La: %d",max);
}
