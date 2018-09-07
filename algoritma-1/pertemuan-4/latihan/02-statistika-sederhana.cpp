#include <iostream>
using namespace std;

int main() {
    int n, b, min, max;
    cin >> n;
    cin >> b;
    min = b; max = b;
    for(int i=1; i<n; i++) {
        cin >> b;
        if(b < min) min = b;
        if(b > max) max = b;
    }
    cout << max << " " << min << endl;
    return 0;
}