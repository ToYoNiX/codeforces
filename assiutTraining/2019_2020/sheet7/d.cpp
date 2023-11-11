#include <iostream>
#define ll long long
using namespace std;

void printDigits(ll n) {
    if (n == 0)
        return;

    printDigits(n / 10);
    printf("%i ", n % 10);
}

int main () {
    ll t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        if (n == 0) {
            cout << 0 << '\n';
            continue;
        }
        printDigits(n);
        cout << '\n';
    }
    return 0;
}
