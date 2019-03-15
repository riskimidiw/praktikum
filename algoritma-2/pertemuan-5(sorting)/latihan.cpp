#include <iostream>
using namespace std;

typedef struct {
    string nama;
    int nim;
} Mahasiswa;

int main() {
    int n;
    cout << "Jumlah data: ";
    cin >> n;
    Mahasiswa mhs[n];
    for (int i = 0; i < n; i++) {
        cout << "\nNim  : ";
        cin >> mhs[i].nim;
        cin.ignore();
        cout << "Nama : ";
        getline(cin, mhs[i].nama);
    }

    Mahasiswa tmpMhs;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (mhs[j + 1].nim < mhs[j].nim) {
                tmpMhs = mhs[j];
                mhs[j] = mhs[j + 1];
                mhs[j + 1] = tmpMhs;
            }
        }
    }

    cout << "\nData sudah urut : " << endl;
    for (int i = 0; i < n; i++) {
        cout << "\nNim  : " << mhs[i].nim << endl;
        cout << "Nama : " << mhs[i].nama << endl;
    }
}