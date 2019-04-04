#include <iostream>
using namespace std;

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int key = low;
        // change order
        for (int i = low; i < high; i++) {
            if (arr[i] < arr[key]) {
                int j;
                for (j = i; j > key; j--) {
                    int tmp = arr[j];
                    arr[j] = arr[j - 1];
                    arr[j - 1] = tmp;
                }
                key = j + 1;
            }
        }
        quicksort(arr, low, key);
        quicksort(arr, key+1, high);
    }
}

int main() {
    int arr[] = {12, 35, 9, 11, 3, 17, 23};
    int n = sizeof(arr) / sizeof(arr[0]);
    quicksort(arr, 0, n);
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}