#include <iostream>
#include <stdlib.h>
using namespace std;

int randomDamage() {
    int random = 1 + rand() % 100;
    if(random >= 50) {
        return 0;
    }
    return random;
}

int main() {
    int len;
    cout << "Panjang sisi area : "; cin >> len;
    int area[len][len];

    // write and display random damage
    for(int i=0; i<len; i++) {
        for(int j=0; j<len; j++) {
            // generate random from 0 to 100
            area[i][j] = randomDamage();
            cout << "\t" << area[j][i] << " ";
        }
        cout << endl;
    }

    // find location where character is die
    int HP = 100;
    bool isDie = false;
    for(int i=0; i<len; i++) {
        for(int j=0; j<len; j++) {
            HP -= area[i][j];
            if(HP <= 0) {
                isDie = true;
                cout << "MATI di lokasi (" << i << "," << j << ")" << endl;
                return 0;
            }
        }
    }
    if(!isDie) {
        cout << "HIDUP, sisa HP : " << HP << endl;
    }
}