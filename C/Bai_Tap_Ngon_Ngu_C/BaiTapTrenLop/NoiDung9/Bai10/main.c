#include <stdio.h>
#include <stdlib.h>

void ChuongTrinh(int *ch)
{
printf("CHUONG TRINH TINH\n");
    printf("1- So pi\n");
    printf("2- So e\n");
    printf("3- So sin(x)\n");
    printf("An Phim Khac: Thoat\n");
    printf("Moi Ban Lua Chon Chuong Trinh: ");
    scanf("%d",&*ch);
    if (*ch>3||*ch<1) return 0;
    else printf("Ban da Lua chon chuong trinh %d\n",*ch);
}

void TinhPi()
{
    float e,d,n,pi=1;
    int i,t=1;
    printf("Nhap E Tinh Pi? ");
    scanf("%f",&e);
    while (e>1)
    {
        printf("Nhap lai E Tinh Pi(e<1)? ");
        scanf("%f",&e);
    }
    d=(1-e)/(e*2);
    n=(int)d;
    for (i=3;i<=n+1;i+=2)
    {
        if(t%2!=0) pi=pi-(float)1/(float)i;
            else pi=pi+(float)1/(float)i;
        t++;
    }
    printf("So Pi: %f",pi*4);
}

void TinhSoe()
{
	int i,j;
	float e,n,test=1,kq=1;
	printf("Nhap So epsilon: ");
	scanf("%f",&e);
	while (e>1)
    {
        printf("Nhap lai So epsilon(e<1): ");
        scanf("%f",&e);
    }
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
	printf("KQ=%f\n",kq);
}

void TinhSoSinx()
{
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
	printf("Sin(%g): %f",x,dem);
    }

int main()
{
    char y='y';
    int ch=0;
    while (y =='y'){
    ChuongTrinh(&ch);
    if (ch>3||ch<1) return 0;
    switch (ch)
    {
        case 1: TinhPi();break;
        case 2: TinhSoe();break;
        case 3: TinhSoSinx();break;
    }
    printf("\nBan Co Muon tiep tuc chuong trinh?(y/n): ");
    scanf("%c",&y);
    scanf("%c",&y);
    }
}
