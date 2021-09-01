#include <stdio.h>
#include <stdlib.h>
//Khai Bao Bien Toan Cuc
int a[5][3]={0};
int chon,i,j,vt;
char c;

//viet menu
void menu()
{
    printf("MENU: \n");
    printf("1-BAt Tat Theo Hang\n");
    printf("2-Bat Tat Theo Cot\n");
    printf("3-Bat Tat Theo Vi Tri\n");
    printf("4-Cong Xuat Cua Den Lep\n");
    printf("So Khac-Thoat\n");
    printf("Moi Ban Chon Chuong Trinh: ");
    scanf("%d",&chon);
}

//tinh cong suat moi bong den
void Tinh(int vt1,int vt2)
{
    if (vt1%2!=0&&vt2%2!=0) a[vt1][vt2]+=10;
    else if (vt1%2==0&&vt2%2==0) a[vt1][vt2]+=20;
    else a[vt1][vt2]+=15;
}

//Bat Hang
void Hang()
{
    printf("Ban chon bat Hang Nao: ");
    scanf("%d",&vt);
    for (i=1;i<=3;i++)
        Tinh(vt,i);
}

//Bat Cot
void Cot()
{
    printf("Ban chon Bat cot Nao: ");
    scanf("%d",&vt);
    for (i=1;i<=5;i++)
        Tinh(i,vt);
}

//Bat Vitri
void ViTri()
{
    int a,b;
    printf("Nhap Hang: ");
    scanf("%d",&a);
    printf("Nhap Cot: ");
    scanf("%d",&b);
    Tinh(a,b);
}

//Tinh cong xuat cua he
void Tong()
{
    int Kq=-1;
    for (i=1;i<=5;i++)
        for (j=1;j<=3;j++)
            Kq+=a[i][j];
    printf("Tieu Thu Dien Nang Mat %d W",Kq);
}
int main()
{
    do{
    system("cls");
    menu();
    if (chon<1||chon>4) return 0;
    switch(chon)
    {
        case 1:Hang();break;
        case 2:Cot();break;
        case 3:ViTri();break;
        case 4:Tong();break;
    }
    printf("\nBan Co Muon Tiep Tuc?(y/n) ");
    scanf("%c",&c);
    scanf("%c",&c);
    }
    while (c=='y');

}
