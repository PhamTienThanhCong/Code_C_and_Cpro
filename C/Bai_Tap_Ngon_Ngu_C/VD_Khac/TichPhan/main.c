#include <stdio.h>
#include <stdlib.h>

int main()
{
    char y='y';
    int ch;
    while (y =='y'){
    printf("CHUONG TRINH TINH\n");
    printf("1- So pi\n");
    printf("2- So e\n");
    printf("3- So sin(x)\n");
    printf("An Phim Khac: Thoat\n");
    printf("Moi Ban Lua Chon Chuong Trinh: ");
    scanf("%d",&ch);
    if (ch>3||ch<1) return 0;
    else {
            printf("Ban da Lua chon chuong trinh %d\n",ch);
    if (ch==1) {
    float e,d,n,pi=1;
    int i,t=1;
    do
    {
    printf("Nhap E Tinh Pi? ");
    scanf("%f",&e);
    if (e>=1) printf("Nhap Sai(e<=1)\n");
    }
    while (e>=1);
    d=(1-e)/(e*2);
    n=(int)d;
    for (i=3;i<=n+1;i+=2)
    {
        if(t%2!=0) pi=pi-(float)1/(float)i;
            else pi=pi+(float)1/(float)i;
        t++;
    }
    printf("So Pi: %f",pi*4);
    return 0;
}
if (ch==2){
	int i,j;
	float e,n,test=1,kq=1;
	do {
	printf("Nhap So epsilon De Tinh So e: ");
	scanf("%f",&e);
	if (e>=1) printf("Nhap Sai(epision<=1)\n");
	}
	while (e>=1);
	i=1;
	while (test>e)
	{
		n=1;
		for (j=1;j<=i;j++)
		       n=n*(float)j;
		test=1/(float)n;
		kq=kq+test;
		i++;
	}
	printf("So e: %f\n",kq);
}
    if (ch==3) {
	float x,dem,i=3,d=-1,e;
	printf("Nhap So X De Tinh Sin(x): ");
	scanf("%f",&x);
	e=6;
	dem=x;
	do {
		dem=dem+d*pow(x,i)/e;
		i+=2;
		e=e*i*(i-1);
		d*=-1;
	}
	while (pow(x,i)/e>0.0001);
	printf("Sin(%f): %f",x,dem);
    }
    }
    printf("Ban Co Muon tiep tuc chuong trinh?(y/n): ");
    scanf("%c",&y);
    scanf("%c",&y);
    }
}
