#include <stdio.h>
#include <stdlib.h>

void print1DimArr(int ar[], int n) {
    int i;
    for (i=0;i<n;i++){
        printf("%d\t",ar[i]);
    }
    printf("\n");
}

int print2DimArrA(int ar[][3], int m){
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", ar[i][j] );
        }
        printf("\n");
    }
}

int print2DimArrB(int ar[][3], int m){
    int i, j;
    for (i = 0; i < m; i++) {
        print1DimArr( ar+i , 3);
    printf("\n");
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int a[n+1][3];
    for (int i=0;i<n;i++){
        for (int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("1_\n");
    print1DimArr(a[0],3);
    printf("2_\n");
    print2DimArrA(a,n);
    printf("3_\n");
    print2DimArrB(a,n);
}