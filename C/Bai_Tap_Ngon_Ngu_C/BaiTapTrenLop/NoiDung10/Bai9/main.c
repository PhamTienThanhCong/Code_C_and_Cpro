#include <stdio.h>
#include <stdlib.h>
int a[1000][1000],b[1000][1000],n,i,j,m;

//Nhap Du Lieu
void Nhapdl()
{
    printf("MaTran Cap?: ");
    scanf("%d",&n);
    printf("MaTran a Cap %dx%d: \n",n,n);
    for (i=1;i<=n;i++)
        for (j=1;j<=n;j++)
            scanf("%d",&a[i][j]);
    printf("MaTran b Cap %dx%d: \n",n,n);
    for (i=1;i<=n;i++)
        for (j=1;j<=n;j++)
            scanf("%d",&b[i][j]);
}
//menu
void menu()
{
    printf("MENU\n");
    printf("1-Cong Hai Ma Tran\n");
    printf("2-Tru Hai Ma Tran\n");
    printf("3-Nhan Hai Ma Tran\n");
    printf("So Khac-Thoat\n");
    printf("Ban Chon Chuong Trinh: ");
    scanf("%d",&m);
}
//Phep Cong
void PhepCongTru(int m)
{
    int d=1,t;
    if(m==2) {
        d=-1;
        printf("MaTran a - MaTran b:\n");
    }
    else printf("MaTran a + MaTran b:\n");
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=n;j++)
        {
            t=a[i][j]+d*b[i][j];
            printf("%d\t",t);
        }
        printf("\n");
    }
}
//PhepNhan
void PhepNhan()
{
    int t,kq;
    for(i=1;i<=n;i++)
    {
        t=1;
        while (t<=n)
        {
            kq=0;
            for (j=1;j<=n;j++)
                kq=kq+a[i][j]*b[j][t];
            printf("%d\t",kq);
            t++;
        }
        printf("\n");
    }
}
int main()
{
    char c;
    do {
    system ("clear");
    menu();
    if (m<1||m>3) return 0;
    Nhapdl();
    printf("Kq:\n");
    if (m==3) PhepNhan();
    else PhepCongTru(m);
    printf("Ban Co Muon Tiep Tuc Chuong Trinh?(Y/n) ");
    scanf("%c",&c);
    scanf("%c",&c);
    }
    while (c=='y');
    return 0;
}
