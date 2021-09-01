#include<stdio.h>

void Bai2(int n)
{
    int i=1,d=0;
    while (i<=n)
	{
		d+=i;
		i++;
	}
	printf("KQ: %d",d);
}
void main()
{
	int n;
	printf("Nhap N: ");
	scanf("%d",&n);
	while ((n<=10)||(n>=100))
	{
		printf("Nhap Sai! \n");
		printf("Nhap N: ");
       	 	scanf("%d",&n);
	}
	Bai2(n);
}
