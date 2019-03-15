#include <iostream>
using namespace std;

int main() {
    int data[] = {5, 4, 2, 1, 6, 10};
    int n = sizeof(data) / sizeof(data[0]);
    int tmp;
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
    // bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (data[j + 1] < data[j]) {
                // tukar
                tmp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = tmp;
            }
        }
    }

    // tampilkan data
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
}