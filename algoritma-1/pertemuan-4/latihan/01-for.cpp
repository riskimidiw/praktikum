#include <iostream>
using namespace std;

int main() {
    int n, b, sum;
    cin >> n;

    sum = 0;
    for(int i=0; i<n; i++) {
        cin >> b;
        sum += b;
    }
    cout << sum << endl;
    return 0;
}