#include <iostream>
using namespace std;

int main() {
    int data[] = {5,7,4,3};
    int n = sizeof(data) / sizeof(data[0]);
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
    int tmp;
    int j;
    // insertion sort
    for(int i=1; i<n; i++) {
        j = i;
        // selama kanan < kiri tukar terus
        while(j>0 && data[j] < data[j-1]) {
            // tukar
            tmp = data[j];
            data[j] = data[j-1];
            data[j-1] = tmp;
            // pindah ke kiri
            j--;
        }
    }
    // tampilkan data
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
}