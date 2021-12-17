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

int SoLuongSV;
QLSV sinhVien[100];

void QLSV_Nhap_Ds(QLSV sinhvien[]){
    // system("cls");
    char c;
    printf("\n\t1. NHAP THONG TIN SINH VIEN\n");
    printf("Nhap So Luong Sinh Vien: ");
    scanf("%d",&SoLuongSV);
    scanf("%c",&c);
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

void QLSV_Tinh_Diem_Tich_Luy(QLSV sinhvien[]){
    // printf("\n\t2. TINH DIEM TICH LUY CUA SINH VIEN\n");
    for(int i=0; i< SoLuongSV; i++){
        sinhvien[i].DiemTL = (sinhvien[i].DiemTB + sinhvien[i].DiemRL)/2;
    }
    // printf("----------Tinh Diem Hoan Tat----------\n");
}

void QLSV_In_Thong_Tin(QLSV sinhvien[]){
    printf("\n\t3. IN TOAN BO THONG TIN SINH VIEN:\n");
    printf("+STT+---Ma SV--+-------------Ho Ten-----------+--DiemTB--+--DiemRL--+--DiemTL--+\n");
    for (int i = 0; i < SoLuongSV; i++){
        printf("+%2d +%10s+%30s+   %0.2f   +   %0.2f   +   %0.2f   +\n",i+1,sinhvien[i].maSv,sinhvien[i].HoTenSv,sinhvien[i].DiemTB,sinhvien[i].DiemRL,sinhvien[i].DiemTL);
        printf("+---+----------+------------------------------+----------+----------+----------+\n");
    }  
}

void QLSV_Xap_Xep_Diem_Ren_Luyen(QLSV sinhvien[]){
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

void QLSV_Sinh_Vien_Diem_Tich_Luy_Cao_Nhat(QLSV sinhvien[]){
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

void QLSV_Them_Sv_Moi(QLSV sinhvien[]){
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
    
    QLSV_Tinh_Diem_Tich_Luy(sinhvien);
}

void remove_element(QLSV sinhvien[], int index, int array_length)
{
   int i;
   for(i = index; i < array_length - 1; i++) sinhvien[i] = sinhvien[i + 1];
}

void QLSV_Xoa_Sinh_Vien(QLSV sinhvien[]){
    int slsv = SoLuongSV;
    QLSV sv[1000];
    float hs;
    printf("\n\t 8. XOA SINH VIEN CO DIM TB THAP HON HS\n");
    printf("Nhap Diem HS: ");
    scanf("%f",&hs);
    int j = 0;
    for (int i = 0 ; i < slsv; i++){
        if (sinhvien[i].DiemTB>=hs){
            sv[j] = sinhvien[i];
            j++;
        }
    }
    SoLuongSV = j;
    for (int i = 0 ; i < j ; i++){
        sinhvien[i] = sv[i];
    }
}

void QLSV_save_file(QLSV sinhvien[]){
    FILE *out_file = fopen("sv.dat", "w");
    for (int i=0;i<SoLuongSV;i++){
        fputs(sinhvien[i].maSv, out_file);
        fputs(",", out_file);
        fputs(sinhvien[i].HoTenSv, out_file);
        fputs(",", out_file);
        char data[6];
        gcvt(sinhvien[i].DiemTB, 2, data);
        fputs(data , out_file);
        fputs(",", out_file);

        gcvt(sinhvien[i].DiemRL, 2, data);
        fputs(data, out_file);
        fputs(",", out_file);

        gcvt(sinhvien[i].DiemTL, 2, data);
        fputs(data, out_file);
        fputs(",\n", out_file);
    }
    fclose(out_file);
}

int main(){
    
    QLSV_Nhap_Ds(sinhVien);
    QLSV_Tinh_Diem_Tich_Luy(sinhVien);
    // QLSV_Xap_Xep_Diem_Ren_Luyen(sinhVien);
    // QLSV_In_Thong_Tin(sinhVien);
    // QLSV_Sinh_Vien_Diem_Tich_Luy_Cao_Nhat(sinhVien);
    // QLSV_Them_Sv_Moi(sinhVien);
    // QLSV_Xap_Xep_Diem_Ren_Luyen(sinhVien);
    // QLSV_In_Thong_Tin(sinhVien);
    // QLSV_Xoa_Sinh_Vien(sinhVien);
    QLSV_In_Thong_Tin(sinhVien);
    QLSV_save_file(sinhVien);
}