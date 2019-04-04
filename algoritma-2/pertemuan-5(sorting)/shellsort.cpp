#include <iostream>
using namespace std;

void shellsort(int arr[], int n) {
    for (int i = n/2; i > 0; i /= 2) {
        for (int j = i; j < n; j++) {
            for (int k = j-i; k >= 0; k -= i) {
                if (arr[k + i] >= arr[k]) {
                    break;
                } else {
                    int tmp = arr[k];
                    arr[k] = arr[k + i];
                    arr[k + i] = tmp;
                }
            }
        }
    }
}

int main() {
    int arr[] = {24, 46, 11, 26, 57, 38, 27, 20, 17};
    int n = sizeof(arr) / sizeof(arr[0]);
    shellsort(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}