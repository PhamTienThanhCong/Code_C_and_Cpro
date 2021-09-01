#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int a[51]={0},t,ct,i;

//ham ngau nhien so hs sd may
void SinhSo()
{
    t++;
    for (int i=1;i<=50;i++)
    {
        a[i]+=rand()%2+0;
        if (a[i]==1) t++;
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
    while (a[m]==1)
    {
        printf("May %d Da Duoc Su Dung!\n");
        printf("Chon Lai May: ");
        scanf("%d",&m);
    }
    t++;
    printf("Ban Dang Su Dung May %d",m);
}
void roimay()
{
    int m;
    do {
    printf("Ban Muon Roi May Nao? ");
    scanf("%d",&m);
    if (a[m]==0) printf("May Do Trong!\n");
    }
    while (a[m]==0);
    a[m]=0;
    t--;
    printf("Ban Da Roi May %d!\n",m);
}
//in ra trang thai may
void TrangThai()
{
    for (i=1;i<=50;i++)
    {
        if (a[i]==0) printf("%d(May Trong)     ",i);
            else  printf("%d(May Su Dung)   ",i);
    if (i%10==0) printf("\n");
}
}
//in ra dien nang tieu thu
void DienNang()
{
    SoNgay();
    for (i=1;i<=50;i++)
    {
        printf("%d=%dW   ",i,a[i]*400);
        if (i%10==0) printf("\n");
    }
}
void TongDienNang()
{
    SoNgay();
    printf("Tong Dien Nang %d\nW",t*400);
    printf("Tien Dien Thanh Toan %d",t*400*750/1000);
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
    printf("May Dung Nhieu Nhat %d va Su Dung %d Lan\n",max,cs1);
    printf("May Dung It Nhat %d va Su Dung %d Lan\n",min,cs2);
}
void main()
{
    char c;
    SinhSo();
    do
    {
        menu();
        if(ct<1||ct>6) return 0;
        switch (ct);
        {
            case 1: sudung();break;
            case 2: roimay();break;
            case 3: TrangThai();break;
            case 4: DienNang();break;
            case 5: TongDienNang();break;
            case 6: maxmin();break;
        }
        printf("Ban Co Muon Tiep Tuc(y/n): ");
        scanf("%c",&c);
        scanf("%c",&c);
    }
    while (c=='y');
}
