#include<stdio.h>

void Bai4(float e)
{
    float i=1,pi=1,d=-1;
	do {
		pi=pi+d*(1/(2*i+1));
		i++;
		d*=-1;
	}
	while (1/(2*i+1)>e);
	printf("KQ=%f",pi*4);
}
int main()
{
	float e;
	do{
		printf("Nhap So epsilon: ");
		scanf("%f",&e);
		if (e>=1) printf("y/c Nhap lai\n");
		}
        while (e>=1);
        Bai4(e);
}
