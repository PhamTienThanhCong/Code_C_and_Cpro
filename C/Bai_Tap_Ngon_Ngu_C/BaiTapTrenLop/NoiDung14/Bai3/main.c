#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct BanHang{
    char Ten[21];
    char Ma[7];
    float Gia;
    float Tong;
    int SoLuong;
}BanHang;

void xoa()
{
    char c;
    while ((c=getchar()) !='\n' && c!=EOF);
}

void Nhapdl(BanHang *nhap,int *n)
{
    char t[21];
    char m[7];
    float g;
    int sl,i=1;
    do{
        if (i>1) xoa();
        printf("\t#Nhap Don Hang Thu %d\n",i);
        printf("\t  -Nhap Ten Hang: ");
        fgets(t,21,stdin);
        t[strlen(t)-1]='\0';
        strcpy(nhap[i].Ten,t);
        printf("\t  -Nhap Ma Hang: ");
        fgets(m,7,stdin);
        m[strlen(m)-1]='\0';
        strcpy(nhap[i].Ma,m);
        printf("\t  -Nhap Don Gia: ");
        scanf("%f",&g);
        nhap[i].Gia=g;
        printf("\t  -Nhap So Luong Hang: ");
        scanf("%d",&sl);
        nhap[i].SoLuong=sl;
        nhap[i].Tong=g*(float)sl;
        i++;
    }while (t[strlen(t)-1]!='.');
    *n=i-1;
}

void XapXep(BanHang *Ban,int n)
{
    int i,j;
    char t1[7],t2[7];
    for(i=1;i<n;i++)
        for (j=i+1;j<=n;j++)
    {
        strcpy(t1,Ban[i].Ma);
        strcpy(t2,Ban[j].Ma);
        if (strcmp(t1,t2)>0)
        {
            BanHang temp;
            temp=Ban[i];
            Ban[i]=Ban[j];
            Ban[j]=temp;
        }
    }
}

void inkq(BanHang *Ban,int n,int t)
{
    int i;
    float Tong=0;
    printf("+-----+---------+-------------------+-----------+--------+-------------+\n");
    printf("| STT | Ma Hang |    Ten Hang Hoa   |  Don Gia  |So Luong|  Tong Tien  |\n");
    printf("+-----+---------+-------------------+-----------+--------+-------------+\n");
    for (i=1;i<=n;i++)
    {
        if (Ban[i].Tong>t){
            printf("| %3d |  %6s |%19s| %9.0f | %6d | %11.0f |\n",i,Ban[i].Ma,Ban[i].Ten,Ban[i].Gia,Ban[i].SoLuong,Ban[i].Tong);
            printf("+-----+---------+-------------------+-----------+--------+-------------+\n");
        Tong+=Ban[i].Tong;
        }
    }
    printf("\t\t\t\t\t\tTONG CONG: %.0f VND\n",Tong);
}
int main()
{
    BanHang Ban[100];
    int sl;
    float Tong;
    printf("\tQUAN LY BAN HANG:\n");
    Nhapdl(Ban,&sl);
    XapXep(Ban,sl);
    printf("\n\t\t\t\tIn Danh Sach Hang Hoa:\n");
    inkq(Ban,sl,0);
    printf("\n\t\tIn Danh Sach Hang Hoa Ten 500000 VND:\n");
    inkq(Ban,sl,500000);
    return 0;
}
