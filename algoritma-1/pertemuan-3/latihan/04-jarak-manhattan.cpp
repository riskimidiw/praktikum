#include <iostream>
using namespace std;

int main() {
    int x1, x2, y1, y2, jarakX, jarakY;

    cin >> x1 >> y1 >> x2 >> y2;
    jarakX = x1 - x2;
    jarakY = y1 - y2;
    if(jarakX < 0) jarakX = jarakX * -1;
    if(jarakY < 0) jarakY = jarakY * -1;
    cout << jarakX + jarakY << endl;
    return 0;
}