#include <iostream>
using namespace std;

int main() {
    int x = 1;
    int y = 2;
    int z = 3;
    int arrmulti[x][y][z];

    // Write array multi
    for(int i=0; i<x; i++) {
        for(int j=0; j<y; j++) {
            for(int k=0; k<z; k++) {
                arrmulti[i][j][k] = 99;
            }
        }
    }

    // Read arrya multi
    for(int i=0; i<x; i++) {
        for(int j=0; j<y; j++) {
            for(int k=0; k<z; k++) {
                cout << arrmulti[i][j][k] << endl;
            }
        }
    }
}