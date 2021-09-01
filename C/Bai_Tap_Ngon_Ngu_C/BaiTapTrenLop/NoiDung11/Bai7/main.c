#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nv[100],st,*p;
    int sl,i;
    printf("So Luong Nhan Vien Trong Cpong Ty: ");
    scanf("%d",&sl);
    for (i=1;i<=sl;i++)
    {
        printf("So Nam Nhan Vien %d Da Lam : ",i);
        scanf("%f",nv+i);
    }
    printf("muc luong dau vao cua cong ty(vnd): ");
    scanf("%f",&st);
    for (i=1;i<=sl;i++)
    {
        p=nv+i;
        *p=st+(float)(int)(nv[i]/3)*st/100;
    }
    for (i=1;i<=sl;i++)
        printf("muc luong hien tai cua nhan vien %d la %.0fVND\n",i,nv[i]);

}
