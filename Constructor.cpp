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

