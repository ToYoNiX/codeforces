#include <iostream>
using namespace std;

int sequenceLen (int n, int counter = 1) {
    if (n == 1)
        return counter;

    if (n % 2 == 0)
        n /= 2;
    else
        n = 3 * n + 1;

   return sequenceLen (n, counter + 1);
}

int main () {
    int n;
    cin >> n;
    printf("%i\n", sequenceLen(n));
    return 0;
}
