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

class Universitas {
public:
    void ubahPangkatDosen(Dosen &d, string pangkatBaru) {
        d.ubahPangkat(pangkatBaru);
    }

    void beriNilaiKeMahasiswa(Dosen &d, Mahasiswa &m, float nilai) {
        beriNilai(d, m, nilai);
    }

    void tampilkanGajiStaff(Staff &s) {
        s.lihatGaji();
    }
};

int main() {
    Mahasiswa m1("Aqif", "M001");
    Dosen d1("Pak Dosen", "001", "Pangkat", 7000000);
    Staff s1("Afa", "001", 5000000);
    Universitas u1;
    u1.beriNilaiKeMahasiswa(d1, m1, 90.0);
    u1.tampilkanGajiStaff(s1);
    u1.ubahPangkatDosen(d1, "Doktor");
    return 0;
}