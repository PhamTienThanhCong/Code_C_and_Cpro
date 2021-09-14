#include<stdio.h>
#include<math.h>
void bai5(float x)
{
        float d=-1,i=3,s=6,tong=x;
        do{
                tong=tong+d*pow(x,i)/s;
                s=s*i*(i-1);
                i+=2;
                d*=-1;
                }
        while(pow(x,i)/s>0.0001);
        printf("ket qua=%f",tong);}
        int main()
{
        float x;
        printf("nhap so x:");
        scanf("%f",&x);
        bai5(x);
}
