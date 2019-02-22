#include <iostream>
#include <stdlib.h>
using namespace std;

// return random value 0 or 1 
bool binaryRandom() {
    return (1 + rand() % 10 > 5);
}

int main() {
    int len;
    cout << "Panjang sisi area : "; cin >> len;
    bool area[len][len];

    // write and display random binary(0,1) data
    for(int i=0; i<len; i++) {
        for(int j=0; j<len; j++) {
            area[i][j] = binaryRandom();
            cout << "\t" << area[i][j] << " ";
        }
        cout << endl;
    }

    // find how many boms in area
    int numberOfBombs = 0;
    for(int i=0; i<len; i++) {
        for(int j=0; j<len; j++) {
            if(area[i][j]) {
                numberOfBombs++;
            }
        }
    }
    cout << "Jumlah bom : " << numberOfBombs << endl;
}