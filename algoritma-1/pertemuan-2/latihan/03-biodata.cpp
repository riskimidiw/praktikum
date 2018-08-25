#include <iostream>
#include <stdlib.h> // untuk fungsi system();
using namespace std;

int main() {
    string nama, hobi, asal, citaCita;
    int tahunLahir;
    char nim[9];

    cout << "Input Data\n\n";
    cout << "Nama        : "; getline(cin, nama);
    cout << "NIM         : "; cin >> nim;
    // cin.ignore() diguanakan agar input setelah tahun tahunLahir
    // tidak di skip. biasanya setelah input angka kemudain input string / kata
    // maka input string akan di skip.
    cout << "Tahun lahir : "; cin >> tahunLahir;  cin.ignore();
    cout << "Hobi        : "; getline(cin, hobi);
    cout << "Asal        : "; getline(cin, asal);
    cout << "Cita-cita   : "; getline(cin, citaCita);

    // system("cls || clear") untuk menghapus tulisan di layar console
    // menghasilkan efek seolah2 pindah layar
    system("cls || clear");
    cout << "Output Data\n\n";
    cout << "Nama        : " << nama << endl;
    cout << "NIM         : " << nim << endl;
    cout << "Tahun Lahir : " << tahunLahir << endl;
    cout << "Hobi        : " << hobi << endl;
    cout << "Asal        : " << asal << endl;
    cout << "Cita-cita   : " << citaCita << endl;

    return 0;
}