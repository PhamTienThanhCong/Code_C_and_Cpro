#include<stdio.h>
void bai2(int n)
{
        int tong=0,j;
        for(j=1;j<=n;j++){
                tong=tong+j;}
        printf("tong cua %d so nguyen dau tien la:%d",n,tong);
}
int main(){
        int n;
        do{
            printf("\nnhap so nguyen n:");
            scanf("%d",&n);
            if (n<=10||n>=100)
            {
                printf("so nguyen phai >10 va <100");
                printf("\n\nyeu cau nhap lai :");
            }

        }
        while (n<=10||n>=100);
        bai2(n);
}
