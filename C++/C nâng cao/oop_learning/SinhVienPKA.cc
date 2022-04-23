#include <iostream>
#include <string>
#include <vector>

using namespace std;

class SinhVienPKA{
    protected:
        int mssv;
        string name, khoa, ngaySinh;
    public:
        SinhVienPKA(){}
        SinhVienPKA(int mssv, string name, string khoa, string ngaySinh){
            this->mssv = mssv;
            this->name = name;
            this->khoa = khoa;
            this->ngaySinh = ngaySinh;
        }
        string getEmail(){
            string email = to_string(mssv) + "@st.phenikaa-uni.edu.vn";
            return email;
        }
        virtual void inThongTin(){
            cout << "mssv : " << mssv << " - Name: " << name << " - Khoa: " << khoa << " - email: " << getEmail() <<" - Sinh Nhat: " << ngaySinh << "\n";
        }
};

class SinhVienCNTT : public SinhVienPKA{
    protected:
    int toeic;
    public:
    SinhVienCNTT(){}
    SinhVienCNTT(int mssv, string name, string khoa, string ngaySinh, int toeic){
        this->mssv = mssv;
        this->name = name;
        this->khoa = khoa;
        this->ngaySinh = ngaySinh;
        this->toeic = toeic;
    }
    void inThongTin(){
        cout << "mssv : " << mssv << " - Name: " << name << " - Khoa: " << khoa << " - email: " << getEmail() <<" - Sinh Nhat: " << ngaySinh << " - Tieng anh: " << toeic <<" toiec\n";
    }
};

class SinhVienCNTTVJ : public SinhVienPKA{
    protected:
    string TiengNhat;
    public:
    SinhVienCNTTVJ(){}
    SinhVienCNTTVJ(int mssv, string name, string khoa, string ngaySinh, string TiengNhat){
        this->mssv = mssv;
        this->name = name;
        this->khoa = khoa;
        this->ngaySinh = ngaySinh;
        this->TiengNhat = TiengNhat;
    }
    void inThongTin(){
        cout << "mssv : " << mssv << " - Name: " << name << " - Khoa: " << khoa << " - email: " << getEmail() <<" - Sinh Nhat: " << ngaySinh << " - Tieng Nhat: " << TiengNhat <<"\n";
    }
};

class SinhVienKHMT : public SinhVienPKA{
    protected:
    float ielts;
    public:
    SinhVienKHMT(){}
    SinhVienKHMT(int mssv, string name, string khoa, string ngaySinh, float ielts){
        this->mssv = mssv;
        this->name = name;
        this->khoa = khoa;
        this->ngaySinh = ngaySinh;
        this->ielts = ielts;
    }
    void inThongTin(){
        cout << "mssv : " << mssv << " - Name: " << name << " - Khoa: " << khoa << " - email: " << getEmail() <<" - Sinh Nhat: " << ngaySinh << " - Tieng anh: " << ielts <<" ielts\n";
    }
};

int main(){
    SinhVienPKA sv1(23201,"Van Cong", "k14", "22-02-2001");
    SinhVienCNTT sv2(21201,"Van Cong", "k14", "22-02-2001", 570);
    SinhVienCNTTVJ sv3(210886,"Van Hoa", "k14", "22-02-1234", "n5");
    SinhVienKHMT sv4(210886,"Van Hoa", "k14", "22-02-1234", 6.4);

    vector<SinhVienPKA*> SinhVien;

    SinhVien.push_back(&sv1);
    SinhVien.push_back(&sv2);
    SinhVien.push_back(&sv3);
    SinhVien.push_back(&sv4);

    for (int i = 0; i < SinhVien.size(); i++){
        SinhVien[i]->inThongTin();
        cout<<"------------------------------\n";
    }

}