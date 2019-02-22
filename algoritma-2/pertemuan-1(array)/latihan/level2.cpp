#include <iostream>
#include <stdlib.h>
using namespace std;

int randomDamage() {
    int random = 1 + rand() % 100;
    if(random <= 60) {
        return 0;
    }
    return random-30;
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
            cout << "\t" << area[i][j] << " ";
        }
        cout << endl;
    }

    // find maximum damage in area
    int maxDamage = 0;
    for(int i=0; i<len; i++) {
        for(int j=0; j<len; j++) {
            if(area[i][j] > maxDamage) {
                maxDamage = area[i][j];
            }
        }
    }
    cout << "Maximum damage bom : " << maxDamage << endl;
}