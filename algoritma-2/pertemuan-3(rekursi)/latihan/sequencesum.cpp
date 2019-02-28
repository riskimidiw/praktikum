#include <iostream>
using namespace std;

int sequenceSum(int n) {
    if (n == 1) {
        return n;
    }
    return n + sequenceSum(n-1);
}

int main() {
    cout << sequenceSum(5) << endl;
}