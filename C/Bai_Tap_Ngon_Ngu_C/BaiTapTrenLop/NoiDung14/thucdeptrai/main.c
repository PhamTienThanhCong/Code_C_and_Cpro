#include <stdio.h>
#include <stdlib.h>
typedef struct ngay_thang_nam
{
    int ngay,thang,nam;

}ntn;
void nhapdl(ntn *n)
{
    int i,ngay,thang,nam;
    for(i=1;i<=2;i++){
    printf("moi ban nhap ngay: ");
    scanf("%d",&ngay);
    printf("thang: ");
    scanf("%d",&thang);
    printf("nam: ");
    scanf("%d",&nam);
    n[i].ngay=ngay;
    n[i].thang=thang;
    n[i].nam=nam;
    }
}

// viet ham
int sosanh(ntn *n)
{
    if(n[1].ngay<n[2].ngay && n[1].thang<n[2].thang && n[1].nam<n[2].nam)
        return -1;
    else if(n[1].ngay>n[2].ngay && n[1].thang>n[2].thang && n[1].nam>n[2].nam)
        return 1;
        else
            return 0;

}
int main()
{
    ntn n[3];
    nhapdl(n);
    printf("%d",sosanh(n));

}
