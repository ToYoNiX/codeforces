#include <iostream>
#define ll long long
using namespace std;

ll factorial (ll i) {
    if (i == 1) {
        return 1;
    }

    return i * factorial(i - 1);
}

int main () {
    int n;
    cin >> n;
    if (n == 0) {
        cout << 0;
        return 0;
    }
    cout << factorial(n) << '\n';
    return 0;
}
