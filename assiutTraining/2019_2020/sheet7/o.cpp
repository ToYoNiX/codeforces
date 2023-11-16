#include <iostream>
using namespace std;

int fibonacci (int idx, int prev = 0, int next = 1) {
    if (idx == 1)
        return prev;

    return fibonacci (idx - 1, next, prev + next);
}

int main () {
    int n;
    cin >> n;

    cout << fibonacci(n) << endl;
    return 0;
}
