#include <stdio.h>
#include <stdlib.h>

//Khai Bao Bien Toan Cuc
int d[13]={0};
int a,b,i;

//Sinh So Ngau Nhien
void SinhSo()
{
    for (i=1;i<=100;i++)
    {
        a=rand() % 6+1;//xuc xac 1
        b=rand() % 6+1;//xuc xac 2
        d[a+b]++;
    }
}
int main()
{
    SinhSo();
    for (int i=2;i<=12;i++)
        printf("%2d Xat Hien %3d Lan\n",i,d[i]);
}
