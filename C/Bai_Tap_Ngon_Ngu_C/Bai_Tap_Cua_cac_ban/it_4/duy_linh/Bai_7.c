#include<stdio.h>
#include<stdlib.h>

int main(){
    int a_size,duongCheoTrai=0,duongCheoPhai=0;
    int a[100][100];

    printf("Nhap size cua ma tran: ");
    scanf("%d",&a_size);

    for(int i=0;i<a_size;i++){
        for(int j=0;j<a_size;j++){
            printf("a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<a_size;i++){
        duongCheoPhai+=a[i][i];
        duongCheoTrai+=a[a_size-i][i];
    }

    printf("ket qua: %d",abs(duongCheoTrai-duongCheoPhai));
}