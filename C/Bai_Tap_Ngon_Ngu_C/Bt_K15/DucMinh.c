// code of duc minh
# include <stdio.h>
# include <string.h>
# include <stdlib.h>

typedef struct QuanLySinhVien{
    char maSv[10];
    char HoTenSv[30];
    float DiemTB;
    float DiemRL;
    float DiemTL;
} QLSV;

void QLSV_Nhap_Ds(int SoLuongSV, QLSV sinhvien[]){
    // system("cls");
    char c;
    printf("\n\t1. NHAP THONG TIN SINH VIEN");
    for (int i=0; i< SoLuongSV; i++){
        printf("\n** Nhap thong tin sinh vien thu %d: **\n",i+1);

        printf("- Nhap Ma Sinh Vien: ");
        fgets(sinhvien[i].maSv, sizeof(sinhvien[i].maSv), stdin);
        sinhvien[i].maSv[strlen(sinhvien[i].maSv) - 1] = '\0';

        printf("- Nhap Ho Ten Sinh Vien: ");
        fgets(sinhvien[i].HoTenSv, sizeof(sinhvien[i].HoTenSv), stdin);
        sinhvien[i].HoTenSv[strlen(sinhvien[i].HoTenSv) - 1] = '\0';

        printf("- Nhap Diem trung binh: ");
        scanf("%f", &sinhvien[i].DiemTB);

        printf("- Nhap Diem Ren Luyen: ");
        scanf("%f", &sinhvien[i].DiemRL);
        scanf("%c",&c);
    }
    printf("----------Nhap Thong Tin Hoan Tat----------\n");
}

void QLSV_Tinh_Diem_Tich_Luy(int SoLuongSV, QLSV sinhvien[]){
    // printf("\n\t2. TINH DIEM TICH LUY CUA SINH VIEN\n");
    for(int i=0; i< SoLuongSV; i++){
        sinhvien[i].DiemTL = (sinhvien[i].DiemTB + sinhvien[i].DiemRL)/2;
    }
    // printf("----------Tinh Diem Hoan Tat----------\n");
}

void QLSV_In_Thong_Tin(int SoLuongSV, QLSV sinhvien[]){
    printf("\n\t3. IN TOAN BO THONG TIN SINH VIEN:\n");
    printf("+STT+---Ma SV--+-------------Ho Ten-----------+--DiemTB--+--DiemRL--+--DiemTL--+\n");
    for (int i = 0; i < SoLuongSV; i++){
        printf("+%2d +%10s+%30s+   %0.2f   +   %0.2f   +   %0.2f   +\n",i+1,sinhvien[i].maSv,sinhvien[i].HoTenSv,sinhvien[i].DiemTB,sinhvien[i].DiemRL,sinhvien[i].DiemTL);
        printf("+---+----------+------------------------------+----------+----------+----------+\n");
    }  
}

void QLSV_Xap_Xep_Diem_Ren_Luyen(int SoLuongSV, QLSV sinhvien[]){
    // printf("\n\t4. XAP XEP SINH VIEN THEO DIEM REN LUYEN TANG DAN:\n");
    for (int i = 0; i < SoLuongSV; i++ ){
        for (int j = i+1; j < SoLuongSV; j++ ){
            if (sinhvien[i].DiemRL > sinhvien[j].DiemRL){
                QLSV temp = sinhvien[i];
                sinhvien[i] = sinhvien[j];
                sinhvien[j] = temp;
            }
        }
    }
}

void QLSV_Sinh_Vien_Diem_Tich_Luy_Cao_Nhat(int SoLuongSV, QLSV sinhvien[]){
    int i = 0;
    for (int j = i+1; j < SoLuongSV; j++ ){
        if (sinhvien[i].DiemTL < sinhvien[j].DiemTL){
            i = j;
        }
    }
    printf("\n\t 4. SINH VIEN CO DIEM TICH LUY CAO NHAT\n");
    printf("+STT+---Ma SV--+-------------Ho Ten-----------+--DiemTB--+--DiemRL--+--DiemTL--+\n");
    printf("+%2d +%10s+%30s+   %0.2f   +   %0.2f   +   %0.2f   +\n",i+1,sinhvien[i].maSv,sinhvien[i].HoTenSv,sinhvien[i].DiemTB,sinhvien[i].DiemRL,sinhvien[i].DiemTL);
    printf("+---+----------+------------------------------+----------+----------+----------+\n");

}

int QLSV_Them_Sv_Moi(int SoLuongSV, QLSV sinhvien[]){
    printf("\n\t5. NHAP THONG TIN SINH VIEN MOI\n");
    int i = SoLuongSV;
    SoLuongSV++;
    printf("- Nhap Ma Sinh Vien: ");
    fgets(sinhvien[i].maSv, sizeof(sinhvien[i].maSv), stdin);
    sinhvien[i].maSv[strlen(sinhvien[i].maSv) - 1] = '\0';

    printf("- Nhap Ho Ten Sinh Vien: ");
    fgets(sinhvien[i].HoTenSv, sizeof(sinhvien[i].HoTenSv), stdin);
    sinhvien[i].HoTenSv[strlen(sinhvien[i].HoTenSv) - 1] = '\0';

    printf("- Nhap Diem trung binh: ");
    scanf("%f", &sinhvien[i].DiemTB);

    printf("- Nhap Diem Ren Luyen: ");
    scanf("%f", &sinhvien[i].DiemRL);
    
    QLSV_Tinh_Diem_Tich_Luy(SoLuongSV, sinhvien);
    return SoLuongSV;
}

void remove_element(QLSV sinhvien[], int index, int array_length)
{
   int i;
   for(i = index; i < array_length - 1; i++) sinhvien[i] = sinhvien[i + 1];
}

int QLSV_Xoa_Sinh_Vien(int SoLuongSV, QLSV sinhvien[]){
    int slsv = SoLuongSV,j=0;
    float hs;
    printf("\n\t 8. XOA SINH VIEN CO DIM TB THAP HON HS\n");
    printf("Nhap Diem HS: ");
    scanf("%f",&hs);
    while (0<slsv){
        if (sinhvien[j].DiemTB < hs){
            remove_element(sinhvien, j, slsv);
            slsv--;
        }else{
            j++;
        }
    }
    return slsv;
}

int main(){
    QLSV sinhVien[100];
    int n=2;
    printf("%d",n);
    QLSV_Nhap_Ds(n,sinhVien);
    QLSV_Tinh_Diem_Tich_Luy(n,sinhVien);
    QLSV_Xap_Xep_Diem_Ren_Luyen(n,sinhVien);
    QLSV_In_Thong_Tin(n,sinhVien);
    QLSV_Sinh_Vien_Diem_Tich_Luy_Cao_Nhat(n,sinhVien);
    n = QLSV_Them_Sv_Moi(n,sinhVien);
    QLSV_Xap_Xep_Diem_Ren_Luyen(n,sinhVien);
    QLSV_In_Thong_Tin(n,sinhVien);
    n = QLSV_Xoa_Sinh_Vien(n,sinhVien);
    QLSV_In_Thong_Tin(n,sinhVien);
}