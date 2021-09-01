#include<stdio.h>

int main()
{
	float e,n=1,test=1,kq=1,i;
	do{
		printf("Nhap So epsilon: ");
		scanf("%f",&e);
		if (e>=1) printf("y/c Nhap lai");
		}
	while (e>=1);
	i=1;
	while (test>e)
	{
		n*=i;
		test=1/n;
		kq+=test;
		i++;
	}
	printf("KQ=%f\n",kq);
}
