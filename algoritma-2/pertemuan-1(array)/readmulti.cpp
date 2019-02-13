#include <iostream>
using namespace std;

int main() {
    int x = 1;
    int y = 2;
    int z = 3;
    int arrmulti[x][y][z] = {
        {
            {1, 2, 3}, {5, 6, 7}
        }
    };

    for(int i=0; i<x; i++) {
        for(int j=0; j<y; j++) {
            for(int k=0; k<z; k++) {
                cout << arrmulti[i][j][k] << endl;
            }
        }
    }
}