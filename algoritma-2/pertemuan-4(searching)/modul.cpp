#include <iostream>
using namespace std;
int main() {
    int X[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i, nilaiCari, j, k;
    bool found;
    cout << "nilai yang dicari = ";
    cin >> nilaiCari;
    found = false;
    i = 0;
    j = 10;
    while ((!found) && (i <= j)) {
        k = (i + j) / 2;
        if (nilaiCari == X[k])
            found = true;
        else {
            if (nilaiCari < X[k])
                j = k - 1; // i tetap
            else
                i = k + 1; // j tetap
        }
    }
    if (found)
        cout << nilaiCari << " ditemukan dalam Array pada index ke-" << k << endl;
    else
        cout << "tidak ada " << nilaiCari << " dalam Array" << endl;
}