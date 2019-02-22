#include <iostream>
using namespace std;

int main() {
    int row = 2;
    int col = 2;
    int arr[row][col];

    // write array
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout << "angka : ";
            cin >> arr[i][j];
        }
    }

    // read array
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}