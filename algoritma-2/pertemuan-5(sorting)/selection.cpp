#include <iostream>
using namespace std;

int main() {
    int data[] = {5, 4, 2, 1, 6, 10};
    int n = sizeof(data) / sizeof(data[0]);
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
    int tmp;
    int min;
    int indexMin;
    // selection sort
    for(int i=0; i<n; i++) {
        min = data[i];
        indexMin = i;
        for(int j=i+1; j<n; j++) {
            // cari min
            if(data[j] < min) {
                min = data[j];
                indexMin = j;
            }
            // tukar di akhir
            if(j == n-1) {
                tmp = data[i];
                data[i] = data[indexMin];
                data[indexMin] = tmp;
            }
        }
    }
    // tampilkan data
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
}