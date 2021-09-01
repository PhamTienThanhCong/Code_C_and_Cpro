#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,q,a[123][123],q1[213],q2[123];
    printf("nhap M,N,Q: ");
    scanf("%d%d%d",&m,&n,&q);
    printf("\nNhap ma Tran\n");
    for (int i=0; i<m; i++){
        for (int j=0; j<m; j++){
            printf("mt[%d,%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n%d cau hoi\n",q);
    for (int i=0; i<q; i++){
        printf("cau hoi thu %d: ",i+1);
        scanf("%d%d",&q1[i],&q2[i]);
    }
    for (int i=0; i<q; i++){
        printf("\ncau %d: ",i+1);
        printf("%d",a[q1[i]-1][q2[i]-1]);
    }
    return 0;
}
