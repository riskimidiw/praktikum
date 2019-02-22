#include <iostream>
using namespace std;

int main() {
    int row = 2;
    int col = 3;
    int arr[row][col] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
