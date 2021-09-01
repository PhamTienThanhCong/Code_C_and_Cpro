#include <stdio.h>
#include <stdlib.h>

int n,a[100000],i,j,c;
//Ham Nhap
void Nhapdl()
{
    printf("Nhap N: ");
    scanf("%d",&n);
    printf("\nNhap %d Chu So: ",n);
    for (i=1;i<=n;i++)
        scanf("%d",&a[i]);
}
//Ham Thay The
void cp(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
//Ham Xap Xep Tang Dan
void xapxep()
{
    for (i=1;i<n;i++)
		for (j=i+1;j<=n;j++)
			if (a[i]<=a[j]) cp(&a[i],&a[j]);
}
void xapxeptang()
{
    printf("Xap Xep Theo Gia Tri Tang Dan:");
    for (i=n;i>=1;i--)
        printf(" %d",a[i]);
}
void xapxepgiam()
{
    printf("Xap Xep Theo Gia Tri Giam Dan:");
    for (i=1;i<=n;i++)
        printf(" %d",a[i]);
}

void menu()
{
    printf("\nMENU");
    printf("\n1-Day So Tang Dan");
    printf("\n2-Day So Giam Dan");
    printf("\nSo Khac-Thoat Chuong Trinh");
    printf("\nChuong tRinh: ");
    scanf("%d",&c);
    if (c==1) xapxeptang();
    else if (c==2) xapxepgiam();
}
int main()
{
    char y;
    do {
    system("clear");
    Nhapdl();
    xapxep();
    menu();
    if (c<1||c>2) return 0;
    printf("\nBan Co Muon Tiep Tuc?(Y/n): ");
    scanf("%c",&y);
    scanf("%c",&y);
    }
    while (y=='y');
}
