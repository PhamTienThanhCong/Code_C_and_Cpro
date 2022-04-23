#include <iostream>
#include <string>

using namespace std;

class Animail{
protected:
    int id, soChan;
    string name, nameAnimail;
    float canNang, chieuCao;
public:
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
    public: 
    dog(int id, int soChan, string nameAnimail, string name, float canNang, float chieuCao){
        this->id = id;
        this->soChan = soChan;
        this->nameAnimail = nameAnimail;
        this->name = name;
        this->canNang = canNang;
        this->chieuCao = chieuCao;
    }
    void Sua(){
        cout << "gau gau";
    }
};

int main(){
    // Animail DongVat = Animail(1,4,"Ga Cong Ngiep", "Gia Xuc", 4.5, 0.4);
    // DongVat.inThongTin();
    dog ben(1,4,"Ga Cong Ngiep", "Gia Xuc", 4.5, 0.4);
    return 0;
}