#include<stdio.h>
#include<stdlib.h>
int i,a[10],n;
void tangdan(int n){
	int i,j;
	for(i=0;i<n;i++){
	for(j=i+1;j<n;j++){
	if(a[i]>a[j]){
	int temp;
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
	}
	}
	}
	printf("Day so theo thu tu tang dan la: ");
	for(i=0;i<n;i++){
	printf("%d ",a[i]);
	}
}
void giamdan(int n){
	int i,j;
	for(i=0;i<n;i++){
	for(j=i+1;j<n;j++){
	if(a[i]<a[j]){
	int temp;
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
	}
	}
	}
	printf("Day so giam dan la: ");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
void main(){
	system("clear");
	printf("\nSo phan tu cua mang n la: ");
	scanf("%d",&n);
	printf("\nHay nhap mang n: ");
	for(i=0;i<n;i++){
	printf("\na[%d]= ",i+1);
	scanf("%d",&a[i]);}
	giamdan(n);
}
