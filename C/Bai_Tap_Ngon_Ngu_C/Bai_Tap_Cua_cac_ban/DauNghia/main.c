#include<stdio.h>
int a[10];
char ch;
int lc,n,i,j,temp;
void giaodien()
{
	printf("CHUONG TRINH SAP XEP\n");
	printf("1-Sap xep mang theo chieu tang dan\n");
        printf("2-Sap xep mang theo chieu giam dan\n");
	printf("An phim khac:Thoat!\n");
	printf("Moi ban nhap chuong trinh:");}
	//Chuong trinh nhap mang
void nhapmang(){
	printf("Nhap n:");
	scanf("%d",&n);
        for (i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
        for (i=0;i<n;i++){
		printf("%d ",a[i]);
}
}
	//Chuong trinh tang dan
void tangdan(){
         printf("\nBan da lua chon sap xep mang tang dan\n");
         nhapmang();
         for(i=0;i<n;i++){
	 for(j=i+1;j<n;j++){
	 if(a[i]>a[j]){
	 temp=a[i];
         a[i]=a[j];
         a[j]=temp;
	 }
       }
}
         printf("Sap xep theo chieu tang dan:");
	 for(i=0;i<n;i++){
         printf("%d ",a[i]);
	 }}
        // Chuong trinh giam dan
void giamdan(){
         printf("\nBan da lua chon sap xep mang giam dan\n");
         nhapmang();
         for(i=0;i<n;i++){
	 for(j=i+1;j<n;j++){
	 if(a[i]<a[j]){
	 temp=a[i];
         a[i]=a[j];
         a[j]=temp;
	 }
       }
}
        printf("Sap xep theo chieu giam dan:");
	for(i=0;i<n;i++){
        printf("%d ",a[i]);
	}}
//Chuong trinh chinh
void main()
{
do
{
    system("clear");
	giaodien();
	scanf("%d",&lc);
	switch(lc)
	{
                case 1:tangdan();break;
		case 2:giamdan();break;
		default:printf("\nThoat!");
	}
    printf("\nBan co muon tiep tuc chuong trinh(y/n)");
    scanf("%c",&ch);
    scanf("%c",&ch);
}
while(ch=='y' || ch=='Y');
}
