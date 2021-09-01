#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct sinhvien {
   char hoten[20],noisinh[20];
   int NamSinh;
   float diem1,diem2,diemtb;
} sinhvien;
//Ham xoa bo nho dem

//Chuong trinh con cho phep nhap so sinh vien trong lop
int nhapN(){
   int N;
   do{
      printf("\nMoi ban nhap so sinh vien cua lop: ");
      scanf("%d",&N);
      if(N < 0 || N > 10){
         printf("So sinh vien nhap vao khong hop le!\n");
	 printf("Moi ban nhap lai!");
      }
   }while(N < 0 || N > 10);
   return N;
}
//Chuong trinh con nhap du lieu cho mot lop sinh vien
void nhaplop(sinhvien *lop, int N){
   int i,namsinh;
   char ten[20],c,noisinh[20];
   float diemthi;
   for(i=0;i<N;i++){
      printf("\n\tSinh vien thu %d:",i+1);
      //Nhap thong tin ve ten
      printf("\n\t- Ho ten: ");
      scanf("%c",&c);
      fgets(ten,sizeof(ten),stdin);
      ten[strlen(ten)-1] = '\0';
      strcpy(lop[i].hoten, ten);
      //nam sinh
      printf("\n\t- Que quan: ");
      fgets(noisinh,sizeof(noisinh),stdin);
      noisinh[strlen(noisinh)-1] = '\0';
      strcpy(lop[i].noisinh, noisinh);
      //Nhap thong tin ve ma sinh vien
      printf("\t- Nam Sinh: ");
      scanf("%d",&namsinh);
      lop[i].NamSinh = namsinh;
      //Nhap thong tin ve ma sinh vien
      printf("\t- Diem trung binh 1 cua sinh vien: ");
      scanf("%f",&diemthi);
      lop[i].diem1 = diemthi;
      printf("\t- Diem thi trung binh 2 cua sinh vien: ");
      scanf("%f",&diemthi);
      lop[i].diem2 = diemthi;
      lop[i].diemtb = (lop[i].diem1+lop[i].diem2)/2;
   }
}
//in thong tin lop sinh vien
void inttlop(sinhvien *lop, int N){
   int i;
   for(i=0;i<N;i++){
      printf("%20s | %4d | %20s | %2.2f | %2.2f |\n",lop[i].hoten,lop[i].NamSinh,lop[i].noisinh,lop[i].diem1,lop[i].diem2);
   }
}
//Chuong trinh con sap xep danh sach lop theo diem thi giam dan
void sapxepdiemthi(sinhvien *lop, int N){
   int i,j;
   for(i=0;i<N;i++)
      for(j=i+1;j<N;j++)
         if(lop[i].diemtb > lop[j].diemtb){
	    sinhvien temp;
	    temp = lop[i];
	    lop[i] = lop[j];
	    lop[j] = temp;
	 }
}

//Chuong trinh con sap xep danh sach lop theo ten abc
//Chuong trinh chinh
void main(){
   int N,demsv=0;
   sinhvien lopcntt4[10];
   system("cls");
   N = nhapN();
   nhaplop(lopcntt4,N);
   printf("\nDANH SACH LOP:\n");
   inttlop(lopcntt4,N);
   sapxepdiemthi(lopcntt4,N);
   printf("\nDANH SACH LOP SAU KHI SAP XEP THEO DIEM THI TAng DAN:\n");
   inttlop(lopcntt4,N);
   for (int i=0;i<N;i++){
    if (lopcntt4[i].NamSinh==1990)
        demsv++;
   }
   printf("so luong sinh vien sinh nam 1990: %d\n",demsv);

   demsv=0;
   for (int i=0;i<N;i++){
    if (lopcntt4[i].noisinh == "Ha Tinh" || lopcntt4[i].noisinh == "Nghe An")
        if (lopcntt4[i].diemtb >= 8.0)
            demsv++;
   }
   printf("so luong sinh vien que HT NA >=8.0: %d\n",demsv);
}
