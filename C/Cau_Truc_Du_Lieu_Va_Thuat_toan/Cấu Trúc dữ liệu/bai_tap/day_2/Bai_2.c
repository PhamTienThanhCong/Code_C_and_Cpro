#include <stdio.h>
#include <stdlib.h>

void print1DimArr(int* ar , int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\t", *(ar+i) );
    }
    printf("\n");
}

int print2DimA(int* ar , int m, int n){
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", *(ar+i*n*m+j-i));
        }
        printf("\n");
    }
}

int print2DimB(int* ar , int m, int n){
    int i, j;
    for (i = 0; i < m; i++) {
        print1Dim( ar+i , n);
        printf("\n");
    }
}

int main(){
    int m,n;
    scanf("%d",&m);
    scanf("%d",&n);
    int a[5][5];
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //print1DimArr(a[0],n);
    //print2DimA(a,m,n);
    print2DimB(a,m,n);
}