#include<stdio.h>
#include<math.h>

void Bai5(float x)
{
    float dem,i=3,d=-1,e;
    e=6;
	dem=x;
	do {
		dem=dem+d*pow(x,i)/e;
		i+=2;
		e=e*i*(i-1);
		d*=-1;
	}
	while (pow(x,i)/e>0.0001);
	printf("KQ=%f",dem);
}
int main()
{
	float x;
	printf("Nhap So X: ");
	scanf("%f",&x);
    Bai5(x);
}
