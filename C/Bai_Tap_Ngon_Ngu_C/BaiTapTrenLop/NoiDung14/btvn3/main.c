#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct thongtinhanghoa
{
    char tenhang[20];
    char mahang[6];
    float dongia,tong;
    int soluongban;
}tt;
int i;char c;
void nhapdl(tt *a,int *n)
{
    i=0;
    char tenhang[20];
    do{
    i++;
    *n=i;
    if (i>1)
    scanf("%c",&c);
    printf("nhap ten hang: ");
    fgets(tenhang,20,stdin);
    if (tenhang[strlen(tenhang)-2]=='*') return 0;
    tenhang[strlen(tenhang)-1]='\0';
    strcpy(a[i].tenhang,tenhang);
    char mahang[6];
    printf("nhap ma hang: ");
    fgets(mahang,6,stdin);
    mahang[strlen(mahang)-1]='\0';
    strcpy(a[i].mahang,mahang);
    printf("nhap so luong: ");
    int soluongban;
    scanf("%d",&soluongban);
    a[i].soluongban=soluongban;
    float dongia;
    printf("moi ban nhap don gia: ");
    scanf("%g",&dongia);
    a[i].dongia=dongia;
    a[i].tong=a[i].dongia*(float)a[i].soluongban;
    }while (tenhang[strlen(tenhang)-2]!='*');
}

void insl(tt *a,int n,float g)
{
    int i;
    float t=0;
    printf("\n+------+---------+---------------------+---------+--------------+----------------+\n");
    printf("|STT   | Ma hang | ten hang hoa        | don gia | so luong     |   tong tien    |\n");
    printf("+------+---------+---------------------+---------+--------------+--------------  +\n");
    for(i=1;i<n;i++)
        if (a[i].tong>g)
        {
        printf("|%2d |%6s %20s %20g %10d %20f  \n",i,a[i].mahang,a[i].tenhang,a[i].dongia,a[i].soluongban,a[i].tong);
        t+=a[i].tong;
    }
    printf("\n_____________________________________________________________________________________________\n");
    printf("                         \t \t \t \t               tong cong: %f",t);

}

int main()
{
    int n;
    tt a[100];
    float t;
        t=t+a[i].tong;
    nhapdl(a,&n);
        printf("\n\ndon hang 500k");
    insl(a,n,500000);
}
