#include <iostream>
using namespace std;

void iLoveRecursion(int n) {
    if (n == 0)
        return;

    iLoveRecursion(n - 1);
    cout << "I love Recursion\n";
}

int main () {
    int n;
    cin >> n;
    iLoveRecursion(n);
    cout << endl;
    return 0;
}
