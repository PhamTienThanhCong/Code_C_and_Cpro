#include<stdio.h>
#include<stdlib.h>

int main(){
    //khai báo biến
    int a_size,b_size;
    int a[100],b[100];
    int kq_a=0,kq_b=0;

    printf("Nhap so luong phan tu cua mang a,b: ");
    scanf("%d%d",&a_size,&b_size);

    printf("Nhap mang a co %d phan tu: ",a_size);
    for (int i=0;i<a_size;i++){
        scanf("%d",&a[i]);
    }
    printf("Nhap mang b co %d phan tu: ",b_size);
    for (int i=0;i<b_size;i++){
        scanf("%d",&b[i]);
    }

    // cau 1:
    for (int i=0;i<b_size;i++){
        // tăng số lượng phần tử thỏa mãn
        kq_a++;
        for (int j=0;j<a_size;j++){
            if (b[i]%a[j] != 0){
                kq_a--;
                break;
            }
        }
    }

    // cau 2:
    for (int i=0;i<a_size;i++){
        // tăng số lượng phần tử thỏa mãn
        kq_b++;
        for (int j=0;j<b_size;j++){
            if (b[j]%a[i] != 0){
                kq_b--;
                break;
            }
        }
    }

    printf("so luong cac so mang b chia het cho mang a: %d\n",kq_a);
    printf("so luong cac so mang a duoc mang chia het: %d",kq_b);
}