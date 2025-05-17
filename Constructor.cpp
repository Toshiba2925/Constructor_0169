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

