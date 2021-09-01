#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct MonHoc
{
    char MaMH[100];
    char TenMH[100];
    int SoTC;
} MonHoc;

void xoa(){
	int ch;
		while ((ch=getchar()) !='\n' &&ch!=EOF);
}
int NhapMH()
{
    int n;
    printf("Nhap So Luong Mon Hoc: ");
    scanf("%d",&n);
    return n;
}

void nhapdl( MonHoc *mon, int n){
    int i,tc,max=0;
    char a[100],b[100];
	for (i=1;i<=n;i++){
        printf("Nhap Mon Hoc Thu:%d\n",i);
        xoa();
        printf("Ma Mon Hoc: ");
        fgets(a,100,stdin);
        a[strlen(a)-1]='\0';
        strcpy(mon[i].MaMH,a);
        printf("Ten Mon Hoc: ");
        fgets(b,100,stdin);
        b[strlen(b)-1]='\0';
        strcpy(mon[i].TenMH,b);
        printf("So Tin Chi: ");
        scanf("%d",&tc);
        mon[i].SoTC = tc;
	}
}

void inkq(MonHoc *mon,int n)
{
    int i;
    printf("-----------------TRA LOI-------------------\n");
    printf("Ban Da Dang Ki %d Mon Hoc\n",n);
    for (i=1;i<=n;i++){
        printf("\nmon thu %d\n",i);
        printf("-Ma Mon Hoc: %s \n",mon[i].MaMH);
        printf("-Ten Mon Hoc: %s \n",mon[i].TenMH);
        printf("-So Tin Chi: %d\n",mon[i].SoTC);
        printf("-----------------------------------------\n");
    }
}

void inkq2(MonHoc *mon,int n)
{
    int i;
    printf("CAC MON HOC IT TIN CHI <2\n");
    for (i=1;i<=n;i++)
        if(mon[i].SoTC<=2)
        {
        printf("-Ma Mon Hoc: %s \n",mon[i].MaMH);
        printf("-Ten Mon Hoc: %s \n",mon[i].TenMH);
        printf("-So Tin Chi: %d\n",mon[i].SoTC);
        printf("-----------------------------------------");
    }
}
int main()
{
    MonHoc dktc[100];
    int n,i,m=0;
    n=NhapMH();
    nhapdl(dktc,n);
    inkq(dktc,n);
    inkq2(dktc,n);
}
