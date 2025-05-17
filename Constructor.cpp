#include <iostream>
#include <string>
using namespace std;

class Dosen;
class Mahasiswa {
private:
    string nama;
    string NIM;
    float nilai;

public:
    Mahasiswa(string n, string nim) : nama(n), NIM(nim), nilai(0) {}
    friend void beriNilai(Dosen &d, Mahasiswa &m, float nilai);
};

class Dosen {
private:
    string nama;
    string NIDN;
    string pangkat;
    float gaji;

public:
    Dosen(string n, string nidn, string p, float g) : nama(n), NIDN(nidn), pangkat(p), gaji(g) {}
    void ubahPangkat(string pangkatBaru) {
        pangkat = pangkatBaru;
    }
    friend void beriNilai(Dosen &d, Mahasiswa &m, float nilai);
};

void beriNilai(Dosen &d, Mahasiswa &m, float nilai) {
    m.nilai = nilai;
    cout << "Dosen " << d.nama << " memberi nilai " << m.nama << " dengan nilai = " << nilai << endl;
}

class Staff {
private:
    string nama;
    string IDstaff;
    float gaji;

public:
    Staff(string n, string id, float g) : nama(n), IDstaff(id), gaji(g) {}
    void lihatGaji() {
        cout << "Gaji staff " << nama << " adalah " << gaji << endl;
    }
};

