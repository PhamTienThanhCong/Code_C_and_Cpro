#include <stdio.h>
#include <string.h>

typedef struct sinhvien
{
    char ten[20];
    int mahs;
    float diem;
} sinhvien;

int nhapn()
{
    int n;
    do {
        printf("Nhap n: ");
        scanf("%d",&n);
        if (n>10||n<0) printf("Nhap sai!\n");
    }while (n>10||n<0);
    return n;
}

void Nhapdl(sinhvien *sv,int n)
{
    int i,ma;
    float diem;
    char ten[20],c;
    for (i=1;i<=n;i++)
    {
        printf("\nNhap thong tin sinh vien thu %d\n",i);
        scanf("%c",&c);
        printf("\tNhap Ten: ");
        fgets(ten,20,stdin);
        ten[strlen(ten)-1]='\0';
        strcpy(sv[i].ten,ten);
        printf("\tNhap ma hoc sinh: ");
        scanf("%d",&ma);
        sv[i].mahs=ma;
        printf("\tNhap so Diem : ");
        scanf("%f",&diem);
        sv[i].diem=diem;
    }
}

void sapxep(int n,sinhvien *sv)
{
    sinhvien tg;
    int i,j;
    for (i=1;i<=n-1;i++){
       for (j=i+1;j<=n;j++){
        if (sv[i].diem < sv[j].diem){
                tg=sv[i];
                sv[i]=sv[j];
                sv[j]=tg;
        }
       }
    }
}

int sosanh(char a[],char b[]){
    char t1[10],t2[10];
    strrchr(a,' ');
    strrchr(b,' ');
    int i=0;
    while (a[i]!='/0'||b[i]!='\0')
    {
        i++;
        if (a[i]<b[i]) return 1;
        if (a[i]=='\0') return 1;
        else if (b[i]=='\0') return 0;
    }
}

void xapxepten(sinhvien *sv, int n)
{
    int i,j;
    char ten1[20],ten2[20];
    for (i=1;i<n;i++)
    for (j=i+1;j<=n;j++)
    {
        strcpy(ten1,sv[i].ten);
        strcpy(ten2,sv[j].ten);
        if (sosanh(ten1,ten2)==1)
        {
            sinhvien temp;
            temp=sv[i];
            sv[i]=sv[j];
            sv[j]=temp;
        }
    }
}
void inkq(sinhvien *sv,int n)
{
    int i;
    printf("+-----+--------+--------------------+------+\n");
    printf("| STT |  MaHS  |      Ho Va Ten     | Diem |\n");
    printf("+-----+--------+--------------------+------+\n");
    for (i=1;i<=n;i++){
        printf("|  %2d |  %4d  |%20s|  %2.2f|\n",i,sv[i].mahs,sv[i].ten,sv[i].diem);
        printf("+-----+--------+--------------------+------+\n");
    }
}

int main()
{
    int n;
    sinhvien sv[11];
    n=nhapn();
    Nhapdl(sv,n);
    printf("\nin danh sach sinh vien\n\n");
    inkq(sv,n);
    sapxep(n,sv);
    printf("\nin danh sach sinh vien theo diem\n\n");
    inkq(sv,n);
    printf("\nin danh sach sinh vien theo tenabc\n\n");
    xapxepten(sv,n);
    inkq(sv,n);
    return 0;
}
