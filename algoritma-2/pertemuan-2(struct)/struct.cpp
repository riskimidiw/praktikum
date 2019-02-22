#include <iostream>
using namespace std;

typedef struct {
    string nama;
} Mahasiswa;

void ubahNama(Mahasiswa *mhs) {
    (*mhs).nama = "ubah";
}

int main() {
    Mahasiswa mhs = {"nama panjang"};
    cout << "sebelum : " << mhs.nama << endl;
    ubahNama(&mhs);
    cout << "sesudah : " << mhs.nama << endl;
}