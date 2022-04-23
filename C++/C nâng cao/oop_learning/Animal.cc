#include <iostream>
#include <string>
#include <vector>

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
    virtual void inThongTin(){
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
    void inThongTin(){
        // inThongTin();
        cout << "-Mau Long: " << mauLong;
    }
    void Sua(){
        cout << "gau gau";
    }
};

class cat : public Animail{
    protected:
    string mauLong;
    public: 
    cat(){}
    cat(int id, int soChan, string nameAnimail, string name, float canNang, float chieuCao, string mauLong){
        this->id = id;
        this->soChan = soChan;
        this->nameAnimail = nameAnimail;
        this->name = name;
        this->canNang = canNang;
        this->chieuCao = chieuCao;
        this->mauLong = mauLong;
    }
    void inThongTin(){
        // inThongTin();
        cout << "-Mau Long: " << mauLong;
    }
    void Sua(){
        cout << "gau gau";
    }
};

class Poodle : public dog{
    public: 
    Poodle(){}
    Poodle(int id, int soChan, string nameAnimail ,string name,float canNang, float chieuCao, string mauLong){
        this->id = id;
        this->soChan = soChan;
        this->nameAnimail = nameAnimail;
        this->name = name;
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

    // chihuahua ben(1,4, "chihuahua" , "Cho Co", 4.5, 0.4, "Den");
    // ben.inThongTin();
    // ben.TuVe();
    // ben.Ngu();
    // ben.Ban();

    vector<Animail*> Animails;
    
    dog d1 = dog(1,30,"Cho Co", "Cho Viet Nam", 4.5, 0.4, "Xanh");
    dog d2 = chihuahua(2,5,"Cho Vang", "Cho mexico", 4.5, 0.4, "Do");
    dog d3 = Poodle(3,24,"Con Cho Co", "Cho dat", 4.5, 0.4, "Tim");
    cat d4 = cat(4,12,"Meo Vang", "Meo Muop", 4.5, 0.4, "Vang");

    Animails.push_back(&d1);
    Animails.push_back(&d2);
    Animails.push_back(&d3);
    Animails.push_back(&d4);

    for (int i = 0; i < Animails.size(); i++){
        Animails[i]->inThongTin();
        cout<<"------------------------------\n";
    }

    return 0;
}