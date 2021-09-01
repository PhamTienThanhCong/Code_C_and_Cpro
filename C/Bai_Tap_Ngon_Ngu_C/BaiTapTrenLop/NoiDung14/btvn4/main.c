#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct thongtin
{
    char ten[20];
    char mahocsinh[8];
    int sophach;
}tt;
typedef struct diembaithi
{
    int sophach;
    float diem;

}dbt;
int n,i,j;
void nhapdl(tt *a,dbt *b)
{
    char ten[20],ma[8],c;
    int sophach;
    printf("so thi sinh <10: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%c",&c);
        printf("thi sinh %d\n",i+1);
        printf("ten hoc sinh %d: ",i+1);
        fgets(ten,20,stdin);
        ten[strlen(ten)-1]='\0';
        strcpy(a[i].ten,ten);
        printf("ma thi sinh %d: ",i+1);
        fgets(ma,8,stdin);
        ma[strlen(ma)-1]='\0';
        strcpy(a[i].mahocsinh,ma);
        printf("so phach %d: ",i+1);
        scanf("%d",&sophach);
        a[i].sophach=sophach;

    }

}
void sapxep(tt *a)
{
    tt temp;
    for (i=0;i<n;i++){
        for(j=i+1;j<n;j++)
        if(a[i].sophach>a[j].sophach){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }

    }

}

void nhapdiem(dbt *b)
{
    float diem;
    int sp;
    for(i=0;i<n;i++){
        printf("nhap bai thi thu %d\n",i+1);
        printf("so phach bai thi %d: ",i+1);
        scanf("%d",&b[i].sophach);
        printf("diem bai thi thu %d: ",i+1);
        scanf("%g",&diem);
        b[i].diem=diem;
    }
}
void sapxep2(dbt *b){
    dbt temp;
    for(i=0;i<n;i++){
        for(j+1;j<n;j++)
            if(b[i].sophach>b[j].sophach){
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;}
}}

void insl(tt *a,dbt *b)
{
    for(i=0;i<n;i++)
        printf("%2d  %20s  %g\n",i+1,a[i].ten,b[i].diem);
}
int main()
{

    tt a[100];
    dbt b[100];
    nhapdl(a,b);
   sapxep(a);
    nhapdiem(b);
    sapxep2(b);
   insl(a,b);
}
