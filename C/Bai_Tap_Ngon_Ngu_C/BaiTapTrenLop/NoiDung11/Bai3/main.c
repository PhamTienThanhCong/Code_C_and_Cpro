#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p,*q,*r;
    int x,y,z,t;
    //Nhap Gia Tri
    printf("Nhap Gia Tri Cho Bien\n");
    printf("Nhap Bien x: ");
    scanf("%d",&x);
    printf("Nhap Bien y: ");
    scanf("%d",&y);
    printf("Nhap Bien z: ");
    scanf("%d",&z);
    printf("\n--------------------------\n");
    //Gian Gai Tri Cho Con Tro
    printf("Gan Gia Tri Cho Con Tro va in Ra Man Hinh\n");
    p=&x;
    q=&y;
    r=&z;
    printf("x=%d; p=%d; *p=%d\n",x,p,*p);
    printf("y=%d; q=%d; *q=%d\n",y,q,*q);
    printf("z=%d; r=%d; *r=%d\n",z,r,*r);
    printf("\n--------------------------\n");
    //Doi Gia Trij Cua Bien
    printf("Doi Gia Tri Cua Bien\n");
    t=x;
    x=y;
    y=z;
    z=t;
    printf("x=%d; p=%d; *p=%d\n",x,p,*p);
    printf("y=%d; q=%d; *q=%d\n",y,q,*q);
    printf("z=%d; r=%d; *r=%d\n",z,r,*r);
    printf("\n--------------------------\n");
    //Doi Gia Tri Cua Con tro
    printf("Doi Gia Tri Cua Con Tro\n");
    t=*p;
    *p=*q;
    *q=*r;
    *r=t;
    printf("x=%d; p=%d; *p=%d\n",x,p,*p);
    printf("y=%d; q=%d; *q=%d\n",y,q,*q);
    printf("z=%d; r=%d; *r=%d\n",z,r,*r);
    printf("\n-----------END------------\n");
}
