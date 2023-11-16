#include <iostream>
#define ll long long
using namespace std;

void suffixSum (ll *arr, ll idx, ll sum) {
    if (idx == -1) {
        cout << sum;
        return;
    }

    sum += arr[idx];
    suffixSum(arr, idx - 1, sum);
}

int main () {
    ll n, m;
    cin >> n >> m;
    ll arr[n];

    while (n--)
        cin >> arr[n];

    suffixSum(arr, m - 1, 0);
    return 0;
}
