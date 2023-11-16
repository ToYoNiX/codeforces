#include <iostream>
#define ll long long

double arrAvg (ll *arr, int n, int idx = 0, ll sum = 0) {
    if (idx == n) {
        return sum * 1.0 / n;
    }

    return arrAvg(arr, n, idx + 1, sum += arr[idx]);
}

int main () {
    int n;
    scanf("%i", &n);
    ll a[n];
    for (int i = 0; i < n; i++)
        scanf("%lld", &a[i]);

    printf("%f\n", arrAvg(a, n));
    return 0;
}
