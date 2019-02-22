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

    // write and display random damage to area
    for(int i=0; i<len; i++) {
        for(int j=0; j<len; j++) {
            // generate random from 0 to 100
            area[i][j] = randomDamage();
            cout << "\t" << area[i][j] << " ";
        }
        cout << endl;
    }

    // find if character die or not
    int HP = 100;
    bool isDie = false;
    for(int i=0; i<len; i++) {
        for(int j=0; j<len; j++) {
            HP -= area[i][j];
            // HP = HP - area[i][j]
            if(HP <= 0) {
                isDie = true;
            }
        }
    }
    if(isDie) {
        cout << "MATI" << endl;
    }else {
        cout << "HIDUP" << endl;
    }
}