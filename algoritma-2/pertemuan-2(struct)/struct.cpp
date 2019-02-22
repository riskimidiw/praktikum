#include <iostream>
using namespace std;

typedef struct {
    string nama, keterangan;
    int jumlah;
    double harga;
}Barang;

typedef struct {
    string nama, alamat, noHp;
    int jumlahBarang;
    Barang barang[100];
}Penjual;

int main() {
    int jmlPenjual;
    cout << "Jumlah Penjual: ";
    cin >> jmlPenjual;
    Penjual arrPenjual[jmlPenjual];

    for(int i=0; i<jmlPenjual; i++) {
        cin.ignore();
        cout << "Nama          : ";
        getline(cin, arrPenjual[i].nama);
        cout << "Alamat        : ";
        getline(cin, arrPenjual[i].alamat);
        cout << "No HP         : ";
        getline(cin, arrPenjual[i].noHp);
        cout << "Jumlah Barang : ";
        cin >> arrPenjual[i].jumlahBarang;

        for(int j=0; j<arrPenjual[i].jumlahBarang; j++) {
            cin.ignore();
            cout << "\tNama       : ";
            getline(cin, arrPenjual[i].barang[j].nama);
            cout << "\tKeterangan : ";
            getline(cin, arrPenjual[i].barang[j].keterangan);
            cout << "\tJumlah     : ";
            cin >> arrPenjual[i].barang[j].jumlah;
            cout << "\tHarga      : ";
            cin >> arrPenjual[i].barang[j].harga;
            cout << endl;
        }
    }

    cout << "\n===========================================\n\n";

    for(int i=0; i<jmlPenjual; i++) {
        cout << "Nama          : " << arrPenjual[i].nama << endl;
        cout << "Alamat        : " << arrPenjual[i].alamat << endl;
        cout << "No HP         : " << arrPenjual[i].noHp << endl;
        cout << "Jumlah Barang : " << arrPenjual[i].jumlahBarang << endl;

        for(int j=0; j<arrPenjual[i].jumlahBarang; j++) {
            cout << "\tNama       : " << arrPenjual[i].barang[j].nama << endl;
            cout << "\tKeterangan : " << arrPenjual[i].barang[j].keterangan << endl;
            cout << "\tJumlah     : " << arrPenjual[i].barang[j].jumlah << endl;
            cout << "\tHarga      : " << arrPenjual[i].barang[j].harga << endl << endl;
        }
    }
}