#include<stdio.h>
#include<stdlib.h>

void Nhapdl()
{
    do {
    printf("Nhap N: ");
    scanf("%d",&n);
    if (n<1||n>10)
        printf("Nhap Sai(Dieu Kien n<10)\n");
    }
    while (n<1||n>10);
    printf("\nNhap %d Chu So: ",n);
    for (i=1;i<=n;i++){
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
}
void cp(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}

void TinhToan()
{
    for (i=1;i<n;i++)
		for (j=i+1;j<=n;j++){
			if (a[i]<=a[j]) cp(&a[i],&a[j]);
			if (abs(b[i])<=abs(b[j])) cp(&b[i],&b[j]);
		}
	printf("\nin ra day tang dan: ");
	for (i=n;i>=1;i--)
		printf("%d ",a[i]);
    printf("\nin ra giam dan: ");
    for (i=1;i<=n;i++)
		printf("%d ",a[i]);
	printf("\nin ra giam dan theo gia tri tuyet doi: ");
        for (i=1;i<=n;i++)
                printf("%d ",b[i]);
}

void main()
{
    Nhapdl();
    TinhToan();
}
