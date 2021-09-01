#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int a[51]={0},b[51]={0},t,ct,i;

//ham ngau nhien so hs sd may
void SinhSo()
{
    t++;
    for (int i=1;i<=50;i++)
    {
        b[i]=rand()%2+0;
        if (b[i]==1) {
                t++;
                a[i]=b[i];
        }
    }
}
//menu
void menu()
{
    printf("Menu:\n");
    printf("1-Dung May\n");
    printf("2-Roi May\n");
    printf("3-Trang Thai May\n");
    printf("4-Dien Ra Dien Nang Tieu Thu Tich Luy Tren tung May\n");
    printf("5-Tong Dien Nang Tieu Thu\n");
    printf("6-In Ra MAy Su Dung Nhieu Nhat Va It Nhat\n");
    printf("So Khac-Thoat!\n");
    printf("Ban Lua Chon Chuong Trinh: ");
    scanf("%d",&ct);
}
//Chon may va roi may
void sudung()
{
    int m;
    printf("May Muon Vao: ");
    scanf("%d",&m);
    while (b[m]==1)
    {
        printf("May %d Da Duoc Su Dung!\n",m);
        printf("Chon Lai May: ");
        scanf("%d",&m);
    }
    b[m]=1;
    t++;
    a[m]++;
    printf("Ban Dang Su Dung May %d",m);
}
void roimay()
{
    int m;
    do {
    printf("Ban Muon Roi May Nao? ");
    scanf("%d",&m);
    if (b[m]==0) printf("May Do Trong!\n");
    }
    while (b[m]==0);
    b[m]=0;
    a[m]--;
    t--;
    printf("Ban Da Roi May %d!\n",m);
}
//in ra trang thai may
void TrangThai()
{
    for (i=1;i<=50;i++)
    {
        if (b[i]==0) printf("%2d(May Trong)    ",i);
            else  printf   ("%2d(Su Dung)      ",i);
    if (i%5==0) printf("\n");
}
}
void SoNgay()
{
    int a;
    printf("So Ngay Su Dung May(Khong chon an 0): ");
    scanf("%d",&a);
    if (a>0)
    for (i=1;i<=a;i++)
        SinhSo();
}

//in ra dien nang tieu thu
void DienNang()
{
    SoNgay();
    for (i=1;i<=50;i++)
    {
        printf("%2d=%5dW  ",i,a[i]*400);
        if (i%5==0) printf("\n");
    }
}
void TongDienNang()
{
    SoNgay();
    printf("Tong Dien Nang %dW\n",t*400);
    printf("Tien Dien Thanh Toan %dVND",t*400*750/1000);
}
//in ra may sd nhieu va it nhat
void maxmin()
{
    SoNgay();
    int min,max,cs1,cs2;
    max=min=a[1];cs1=cs2=1;
    for (i=2;i<=50;i++)
    {
    if (a[i]>max)
    {
        max=a[i];
        cs1=i;
    }
    if (a[i]<min)
    {
        min=a[i];
        cs2=i;
    }
    }
    printf("May Dung Nhieu Nhat la %d va Su Dung %d Lan\n",cs1,max);
    printf("May Dung It Nhat la %d va Su Dung %d Lan\n",cs2,min);
}
int main()
{
    char c;
    SinhSo();
    do
    {
        system("cls");
        menu();
        if(ct<1||ct>6) return 0;
        switch (ct)
        {
            case 1: sudung();break;
            case 2: roimay();break;
            case 3: TrangThai();break;
            case 4: DienNang();break;
            case 5: TongDienNang();break;
            case 6: maxmin();break;
        }
        printf("\nBan Co Muon Tiep Tuc(y/n): ");
        scanf("%c",&c);
        scanf("%c",&c);
    }
    while (c=='y');
}
