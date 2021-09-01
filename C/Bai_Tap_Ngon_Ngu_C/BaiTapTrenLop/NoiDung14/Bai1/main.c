#include <stdio.h>
#include <stdlib.h>

typedef struct date{
    int day;
    int month;
    int year;
} date;

void xoa(){
	int ch;
		while ((ch=getchar()) !='\n' &&ch!=EOF);
}

int kt(int d,int m,int y)
{
    if (m<1||m>12){
        printf("#Nhap Thang Sai\n-Thang phai trong khoang(1-12)/n");
        return 0;
    }
    if (m==4||m==6||m==11||m==9)
        if (d<1 || d>30){
        printf("#Nhap Ngay Sai\n-Thang %d phai trong khoang 1-30 ngay\n",m);
        return 0;
        }
    if (m==2){
        if (d<1 || d>28 && y%4!=0){
            printf("#Nhap Ngay Sai\n-Thang 2(khong nhuan) phai trong khoang 1-28 ngay\n");
            return 0;
        }
        if (d<1 || d>29 && y%4==0){
            printf("#Nhap Ngay Sai\n-Thang 2 Nam Nhuan Phai trong khoang 1-29 ngay\n");
            return 0;
        }
    }
    if (m==1||m==3||m==5||m==7||m==8||m==10||m==12)
        if (d<1 || d>31) {
            printf("#Nhap Ngay Sai\n-Thang %d phai trong khoang 1-31 Ngay\n");
            return 0;
        }
    return 1;
}

void nhapdl(date *nhap)
{
    int i,d,m,y,t;
    for (i=1;i<=2;i++)
        do{
            printf("\n\tNhap Ngay thang nam thu %d \n",i);
            printf("\t\t-Nhap Ngay: ");
            scanf("%d",&d);
            printf("\t\t-Nhap Thang: ");
            scanf("%d",&m);
            printf("\t\t-Nhap Nam: ");
            scanf("%d",&y);
            nhap[i].day=d;
            nhap[i].month=m;
            nhap[i].year=y;
        } while (kt(d,m,y)==0);
}

int kiemtra(date *kt)
{
    int i,d;
    if (kt[1].day>kt[2].day)
        return -1;
    else if (kt[1].day==kt[2].day)
        return 0;
    else return 1;
}
void in(int t)
{
    printf("\n\t\tKet Qua\n");
    if (t==-1) printf("\t\tNgay 1 Truoc Ngay 2\n");
    else if (t==0) printf("\t\tNgay 1 Bang Ngay 2\n");
    else printf("\t\tNgay 1 sau Ngay Hai\n");
    printf("\t----------------END-----------------\n");
}
int main()
{
    printf("\tCHUONG TRINH SO SANH NGAY\n");
    date dmy[3];
    int t;
    nhapdl(dmy);
    t=kiemtra(dmy);
    in(t);
    return 0;
}
