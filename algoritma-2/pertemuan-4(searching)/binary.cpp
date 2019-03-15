#include <iostream>
using namespace std;

int main() {
    bool found = false;
    int data[] = {1,2,3};
    int n = sizeof(data)/sizeof(data[0]);
    int low = 0;
    int high = n;
    int mid = (low + high) / 2;
    int cari = 4;
    while(low <= high) { 
        if(cari == data[mid]) {
            found = true;
            break;
        }else if(cari < data[mid]) {
            high = mid - 1;
        }else {
            low = mid + 1;
        }
        mid = (low + high) / 2;
    }

    if(found) cout << "KETEMU GITUU\n";
    else cout << "TIDAK KETEMU !!!\n";
}