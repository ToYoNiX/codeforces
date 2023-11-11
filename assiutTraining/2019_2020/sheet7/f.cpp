#include <iostream>
#define ll long long
using namespace std;

void printEvenIndices (ll *arr, int idx) {
    if (idx == -1)
        return;

    if (idx % 2 == 0)
        printf("%i ", arr[idx]);

    printEvenIndices(arr, idx - 1);
}

int main () {
    int n;
    cin >> n;
    ll arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    printEvenIndices(arr, n - 1);
    cout << '\n';
    return 0;
}
