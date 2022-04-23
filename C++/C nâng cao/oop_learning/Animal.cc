#include <iostream>
#include <string>

using namespace std;

class Animail{
protected:
    int id, soChan;
    string name, nameAnimail;
    float canNang, chieuCao;
public:
    Animail(){}
    Animail(int id, int soChan, string nameAnimail, string name, float canNang, float chieuCao){
        this->id = id;
        this->soChan = soChan;
        this->nameAnimail = nameAnimail;
        this->name = name;
        this->canNang = canNang;
        this->chieuCao = chieuCao;
    }
    void inThongTin(){
        cout << "Thong Tin Thong Vat\n";
        cout << "-id: " << id << "\n-Ten loai: " << nameAnimail << "\n-Chung Loai: " << name;
        cout << "\n-soChan: " << soChan << " chan\n-Can Nang: " << canNang << " kg\n-Chieu Cao: " << chieuCao << "\n";
    }
};

class dog : public Animail{
    protected:
    string mauLong;
    public: 
    dog(){}
    dog(int id, int soChan, string nameAnimail, string name, float canNang, float chieuCao, string mauLong){
        this->id = id;
        this->soChan = soChan;
        this->nameAnimail = nameAnimail;
        this->name = name;
        this->canNang = canNang;
        this->chieuCao = chieuCao;
        this->mauLong = mauLong;
    }
    void inThongTinDog(){
        inThongTin();
        cout << "-Mau Long: " << mauLong;
    }
    void Sua(){
        cout << "gau gau";
    }
};

class Poodle : public dog{
    public: 
    Poodle(){}
    Poodle(int id, int soChan, string nameAnimail ,float canNang, float chieuCao, string mauLong){
        this->id = id;
        this->soChan = soChan;
        this->nameAnimail = nameAnimail;
        this->name = "Cho Co";
        this->canNang = canNang;
        this->chieuCao = chieuCao;
        this->mauLong = mauLong;
    }
    void SanMoi(){
        cout << "Sua gaugau";
    }

};

class chihuahua : public dog{
    public:
    chihuahua(){}
    chihuahua(int id, int soChan, string nameAnimail, string name, float canNang, float chieuCao, string mauLong){
        this->id = id;
        this->soChan = soChan;
        this->nameAnimail = nameAnimail;
        this->name = name;
        this->canNang = canNang;
        this->chieuCao = chieuCao;
        this->mauLong = mauLong;
    }
    void ThoiGianTam(){
        cout << "5 phut";
    }
    void TuVe(){
        cout << "\nSua Gaugau";
    }
    void Ngu(){
        cout << "\nKho Kho";
    }
    void Ban(){
        cout << "\nGia Ban: 5000$";
    }
};


int main(){
    // Animail DongVat = Animail(1,4,"Ga Cong Ngiep", "Gia Xuc", 4.5, 0.4);
    // DongVat.inThongTin();
    // dog ben(1,4,"Ga Cong Ngiep", "Gia Xuc", 4.5, 0.4, "Den");
    // ben.inThongTinDog();

    chihuahua ben(1,4, "chihuahua" , "Cho Co", 4.5, 0.4, "Den");
    // ben.inThongTinDog();
    ben.TuVe();
    ben.Ngu();
    ben.Ban();

    return 0;
}