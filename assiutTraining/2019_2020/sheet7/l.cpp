#include <iostream>
#define ll long long
using namespace std;

ll summation (ll *arr, int idx, ll sum) {
    if (idx == -1)
        return sum;

    return summation(arr, idx - 1, sum += arr[idx]);
}

int main () {
    ll n;
    cin >> n;
    ll arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << summation(arr, n - 1, 0);
    return 0;
}
