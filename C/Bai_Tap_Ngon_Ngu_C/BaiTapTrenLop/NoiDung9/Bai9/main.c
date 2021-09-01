#include<stdio.h>

void menu()
{
    printf("CHUONG TRINH MAY TINH DIEN TU\n");
	printf("    An Phim 1- Phep Cong\n");
	printf("    An Phim 2- Phep Tru\n");
	printf("    An Phim 3- Phep Nhan\n");
	printf("    An Phim 4- Phep Chia\n");
	printf("    An Phim Khac: Thoat\n");
	printf("Moi Ban lua chon chuong trinh tinh: ");
}
void ChonChuongTrinh(int t)
{
    switch(t)
        {
                case 1: printf("Ban Chon Chuong Trinh Tinh Tong  \n"); break;
                case 2: printf("Ban Chon Chuong Trinh Tinh Hieu \n"); break;
                case 3: printf("Ban Chon Chuong Trinh Tinh Tich \n"); break;
                case 4: printf("Ban Chon Chuong Trinh Tinh Thuong \n"); break;
        }
}
void TinhToan(int t,float a,float b)
{
    switch(t)
	{
		case 1: printf("Tong Hai So La: %.0f\n",a+b); break;
		case 2: printf("Hieu Hai SO LA: %.0f\n",a-b); break;
		case 3: printf("Tich Hai So La: %.0f\n",a*b); break;
		case 4: printf("Thuong Hai So La: %f\n",a/b); break;
	}
}
void NhapDuLieu(int t,float *a, float *b)
{
	printf("Nhap So Thu Nhat: ");
	scanf("%f",&*a);
	printf("Nhap So Thu Hai: ");
        scanf("%f",&*b);
	if (t==4)
                while (b==0)
                {
                    printf("Nhap LAi So Thu Hai: ");
                    scanf("%f",&*b);
                }
}
int main()
{
	int t;
	float a=0,b=0;
	char c='y';
	while (c=='y')
{
    menu();
	scanf("%d",&t);
	if ((t<0)||(t>4)) return 0;
	ChonChuongTrinh(t);
    NhapDuLieu(t,&a,&b);
    TinhToan(t,a,b);
    printf("BAn Co Muon Tiep Tuc chuong trinh?(y/n)\n");
	scanf("%c",&c);
	scanf("%c",&c);
}
}
