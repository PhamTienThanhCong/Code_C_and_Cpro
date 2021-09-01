#include<stdio.h>


void Bai1(int n)
{
    int i=1,d=1;
    do {
        	d*=i;
        	i++;
        	}
        while (i<=n);
        if (n<0) d=-1;
        printf("KQ: %d",d);
}
int main()
{
    int n;
	do {
        	printf("Nhap N: ");
        	scanf("%d",&n);
		if (n>=8)
            printf("Nhap Sai! \n");
        }
	while (n>=8);
    Bai1(n);
}

