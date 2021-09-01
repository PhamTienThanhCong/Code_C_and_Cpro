#include<stdio.h>
#include<string.h>
int i,n;

void giaodien(){
	printf("CHUONG TRINH DICH CHUYEN VI TRI\n");
	printf("\t1 - Sang trai\n");
	printf("\t2 - Sang phai\n");
}
void right(char a[100]){
    char t=a[0];
	for(i=0; i<n-1; i++)
        a[i]=a[i+1];
    a[n-2]=t;
}
void left(char a[100]){
    char t=a[n-2];
	for(i=n-2; i>0; i--)
        a[i]=a[i-1];
    a[0]=t;
}
void main(){
	char a[100],c;
	int option;
	do{
    system("clear");
	giaodien();
	printf("Nhap xau:");
	fgets(a,100,stdin);
	n = strlen(a);
	printf("Moi ban nhap lua chon:");
	scanf("%d",&option);
	switch(option){
		case 1:
			right(a);
			printf("Sau khi dich chuyen:%s",a);break;
		case 2:
			left(a);
			printf("Sau khi dich chuyen:%s",a);break;
	}
	printf("\nBan Co Muon Tiep Tuc(Y/n)");
	scanf("%c",&c);
	scanf("%c",&c);
	}
	while (c=='y');
}
