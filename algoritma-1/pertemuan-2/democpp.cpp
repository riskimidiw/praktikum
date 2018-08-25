#include <iostream>
using namespace std;

int main() {
    double c, k, r, f;

    cout << "Masukan suhu(celcius) : ";
    cin >> c;

    k = 273 + c;
    r = (4.0/5 * c) + 32;
    f = (9.0/5 * c) + 32;
    cout << "Kelvin     : " << k << endl;
    cout << "Reamur     : " << r << endl;
    cout << "Farenheit  : " << f << endl;

    return 0;
}