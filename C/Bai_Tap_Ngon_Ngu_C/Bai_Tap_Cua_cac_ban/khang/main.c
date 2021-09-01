#include<stdio.h>
int i;
void countEven(int *a[], int size){
    int *d,dem=0;//Khai bao con tro va bien dem so duong
    //Nhap Mang
    printf("\nNhap mang :");
 	for(i=0; i<size; i++){
            d=a+dem;//gan a[i] bang con tro d
     		printf("\n Nhap so thu %d :",i+1);
     		scanf("%d",&*d);//Nhap Du Lieu Cho Con Tro Tuong Duong Cho a[i]
     		if (*d%2==0)//ham kiem tra so duong
                dem++;//neu So Duong thi a[i] se nhan gia tri moi
		}
    //in ra cac so chan trong day
    printf("So Cac So Chan Trong Day: ");
    for (i=0;i<dem;i++)
        printf("%d ",a[i]);
    //in ra cac so chan trong day
    printf("\nSo Luong Cac So Am Trong Day: %d",dem);
}
int main(){
    int number[30],size,sl;
    //Nhap Kich Thuoc Mang
    printf("Nhap kich thuoc cua mang:");
	scanf("%d",&size);
	//Goi Ham Ra
	countEven(number,size);
return 0;
}
