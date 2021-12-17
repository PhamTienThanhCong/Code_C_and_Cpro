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
    
    for(int i=0; i< SoLuongSV; i++){
        sinhvien[i].DiemTL = (sinhvien[i].DiemTB + sinhvien[i].DiemRL)/2;
    }
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
    char c;
    scanf("%c",c);
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
        fputs("\n", out_file);
    }
    fclose(out_file);
}

void QLSV_read_data(){
        printf("\n\t9. DOC DU LIEU TU FILE sv.dat:\n");
        FILE* fp = fopen("sv.dat", "r");
        char buffer[123];
        QLSV sv[1000];
        int i = 0;
        int temp = SoLuongSV;
        while (fgets(buffer,1024, fp)) {
            char* value = strtok(buffer, ", ");
            int j=1;
            while (value) {
                if (j==1){
                    strcpy(sv[i].maSv,value);
                }
                if (j==2){
                    strcpy(sv[i].HoTenSv,value);
                }
                if (j==3){
                    sv[i].DiemTB = atof(value);
                }
                if (j==4){
                    sv[i].DiemRL = atof(value);
                }
                if (j==5){
                    sv[i].DiemTL = atof(value);
                }
                value = strtok(NULL, ", ");
                j++;
            }
            i++;
            printf("\n");
        }
        SoLuongSV = i;
        QLSV_In_Thong_Tin(sv);
        SoLuongSV = temp;
        // Close the file
        fclose(fp);
}

int main(){
    int c = 0;
    while (c == 0){
        system("cls");
        printf("\tCHUONG TRINH QUAN LY SINH VIEN:\t\n");
        printf("1. Nhap danh sach sinh vien\n");
        printf("2. Tinh diem tich luy cua sinh vien\n");
        printf("3. In danh sach sinh vien\n");
        printf("4. Xap xep danh sach sinh vien theo diem ren luyen\n");
        printf("5. In sinh vien co diem tich luy cao nhat\n");
        printf("6. Them 1 sinh vien\n");
        printf("7. Xoa sinh vien co diem trung binh thap hon hs\n");
        printf("8. In sinh vien ra file sv.dat\n");
        printf("9. Doc va in du lieu sv tu file sv.dat\n");
        printf("Moi ban chon chuc nang: ");
        scanf("%d", &c);
        if(c == 1){
            QLSV_Nhap_Ds(sinhVien);
        }else if(c == 2){
            printf("\n\t2. TINH DIEM TICH LUY CUA SINH VIEN\n");
            QLSV_Tinh_Diem_Tich_Luy(sinhVien);
            printf("\t----------Tinh Diem Hoan Tat----------\n");
        }else if(c == 3){
            QLSV_In_Thong_Tin(sinhVien);
        }else if(c == 4){
            printf("\n\t4. XAP XEP SINH VIEN THEO DIEM REN LUYEN TANG DAN:\n");
            QLSV_Xap_Xep_Diem_Ren_Luyen(sinhVien);
            printf("\t-----------Xap xep Hoan Tat----------\n");
        }
        else if(c == 5){
            QLSV_Sinh_Vien_Diem_Tich_Luy_Cao_Nhat(sinhVien);
        }else if(c == 6){
            QLSV_Them_Sv_Moi(sinhVien);
        }else if(c == 7){
            QLSV_Xoa_Sinh_Vien(sinhVien);
            printf("\t-----------Xoa Hoan Tat----------\n");
        }else if(c == 8){
            QLSV_save_file(sinhVien);
            printf("\t-----------luu fil Hoan Tat----------\n");
        }else if(c == 9){
            QLSV_read_data();    
        }
        printf("Nhap 0 De Tiep Tuc: ");
        scanf("%d", &c);
    }    
}