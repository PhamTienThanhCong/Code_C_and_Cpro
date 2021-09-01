#include<stdio.h>

int ucln(int a,int b)
{
    while(a!=b)
	    if (a<b) b=b-a;
		else a=a-b;
    return a;
}
int main()
{
	int a,b;
	printf("Nhap Hai So a,b: ");
	scanf("%d%d",&a,&b);
	printf("UCLN: %d",ucln(a,b));
}
