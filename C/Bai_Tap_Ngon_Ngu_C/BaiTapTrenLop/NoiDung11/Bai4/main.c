#include <stdio.h>
#include <stdlib.h>

//Ham Thay The
void cp(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
//Ham Xap Xep Tang Dan
void xapxep(int a[],int n)
{
    int i,j;
    for (i=1;i<n;i++)
		for (j=i+1;j<=n;j++)
			if (a[i]<=a[j]) cp(&a[i],&a[j]);
}

void main()
{
    int a[1000],n,i;
    printf("Nhap Gia Tri N: ");
    scanf("%d",&n);
    printf("Nhap Day %d Ki Tu: ",n);
    for (i=1;i<=n;i++)
        scanf("%d",&a[i]);
    xapxep(a,n);
    for (i=1;i<=n;i++)
        printf("%d ",a[i]);
}
