#include <iostream>
using namespace std;

void printBinary (int n) {
    if (n == 0)
        return;
    
    printBinary(n / 2);
    
    if (n % 2) {
        cout << 1;
    }
    else {
        cout << 0;
    }
}

int main () {
    int t;
    cin >> t;

    double n;
    while (t--) {
        cin >> n;
        printBinary(n);
        cout << '\n';
    }

    return 0;
}
