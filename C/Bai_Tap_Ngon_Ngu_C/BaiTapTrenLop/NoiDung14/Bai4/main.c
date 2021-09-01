#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct HoTen{
    char ten[20];
    char MaHS[9];
    int SoPh1;
}HoTen;

typedef struct SoPhach{
        int Soph2;
        float diem;
}SoPhach;

int NhapN()
{
    printf("\t\tCHUONG TRINH GHEP PHACH BAI THI\n");
    int n;
    do {
        printf("\t*Nhap So Luong Sinh Vien: ");
        scanf("%d",&n);
        if (n>10||n<1) printf("Nhap Sai N(1-10)\n");
    }while (n<1||n>10);
    return n;
}

void Nhapxau(char s[],int n){
    fgets(s,n,stdin);
    s[strlen(s)-1]='\0';
}

void NhapTen(HoTen *Nhap,int n)
{
    int i,sp;
    char Ten[20],ma[8],c;
    printf("\n#NHAP THONG TIN SINH VIEN VA SO PHACH\n");
    for (i=1;i<=n;i++){
        printf("\t-Nhap Thong Tin Sinh Vien Thu %d\n",i);
        scanf("%c",&c);
        printf("\t\t+Nhap Ten Thi Sinh: ");
        Nhapxau(Nhap[i].ten,20);
        printf("\t\t+Nhap Ma So Hoc Sinh: ");
        Nhapxau(Nhap[i].MaHS,9);
        printf("\t\t+Nhap So Phach: ");
        scanf("%d",&Nhap[i].SoPh1);
        }
    printf("\n---------------Ket Thuc Nhap--------------------\n");
}

void NhapDiem(SoPhach *Nhap,int n){
    int i,sp;
    float d;
    printf("\n#NHAP SO PHACH VA DIEM QUA BAI THI\n");
    for (i=1;i<=n;i++){
        printf("\t-Nhap Du Lieu Bai Thi Thu %d\n",i);
        printf("\t\t+Nhap So Phach: ");
        scanf("%d",&Nhap[i].Soph2);
            printf("\t\t+Nhap So Diem: ");
            scanf("%f",&Nhap[i].diem);
    }
    printf("\n---------------Ket Thuc Nhap--------------------\n");
}

void xapxep1(HoTen *xep,int n){
    int i,j;
    for (i=1;i<n;i++)
        for (j=i+1;j<=n;j++)
            if (xep[i].SoPh1>xep[j].SoPh1){
                HoTen temp;
                temp=xep[i];
                xep[i]=xep[j];
                xep[j]=temp;
            }
}

void xapxep2(SoPhach *xep,int n){
    int i,j;
    for (i=1;i<n;i++)
        for (j=i+1;j<=n;j++)
            if (xep[i].Soph2>xep[j].Soph2){
                SoPhach temp;
                temp=xep[i];
                xep[i]=xep[j];
                xep[j]=temp;
            }
}

void inkq(HoTen *s1,SoPhach *s2,int n)
{
    int i;
    printf("\n\n\t\tKET QUA SAU KHI GHEP SO PHACH\n");
    printf("\t+-----+-----------+--------------------+------+\n");
    printf("\t| STT | MaThiSinh |      HO VA TEN     | Diem |\n");
    printf("\t+-----+-----------+--------------------+------+\n");
    for (i=1;i<=n;i++){
        printf("\t| %2d  | %9s |%20s|  %2.1f |\n",i,s1[i].MaHS,s1[i].ten,s2[i].diem);
        printf("\t+-----+-----------+--------------------+------+\n");
    }
    printf("\t\t\ti thank you for everything and good bye");
}

int main()
{
    HoTen Ten[11];
    SoPhach Diem[11];
    int n;
    n=NhapN();
    NhapTen(Ten,n);
    xapxep1(Ten,n);
    NhapDiem(Diem,n);
    xapxep2(Diem,n);
    inkq(Ten,Diem,n);
}
