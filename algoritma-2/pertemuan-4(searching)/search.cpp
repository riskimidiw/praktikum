#include <iostream>
using namespace std;

int n;
int binarySearch(int arr[], int data) {
    int low = 0, high = n;
    int mid = (low + high) / 2;
    while(low <= high) {
        cout << "*";
        if(arr[mid] == data) {
            return mid;
        } else if(data < arr[mid]) {
            high = mid - 1;
        }else {
            low = mid + 1;
        }
        mid = (low + high) / 2;
    }
    return -1;
}

int linearSearch(int arr[], int data) {
    for(int i=0; i<n; i++) {
        cout << "*";
        if(arr[i] == data) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[100];
    n = 100;
    for(int i=0; i<n; i++) {
        arr[i] = i;
    }
    int index = binarySearch(arr, 1);
    cout << endl;
    cout << index << endl;
    index = linearSearch(arr, 1);
    cout << endl;
    cout << index << endl;
}