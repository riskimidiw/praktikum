#include <iostream>
using namespace std;

typedef struct {
    int nim;
    string nama;
}Mahasiswa;

int main() {
    int nim, n;
    cout << "Banyak data : "; cin >> n;
    Mahasiswa mhs[n];
    for(int i=0; i<n; i++) {
        cout << "\nNim  : "; cin >> mhs[i].nim; cin.ignore();
        cout << "Nama : "; getline(cin, mhs[i].nama);
    }
    cout << endl;
    cout << "Cari nim : "; cin >> nim;
    cout << endl;
    for (int i=0; i<n; i++) {
        if(nim == mhs[i].nim) {
            cout << mhs[i].nim << endl;
            cout << mhs[i].nama << endl;
        }
    }
    return 0;
}