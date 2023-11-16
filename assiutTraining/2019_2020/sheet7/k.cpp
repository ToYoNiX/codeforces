#include <iostream>
#define ll long long
using namespace std;
 
ll findMax(ll *arr, int idx, ll &max) {
    if (idx == -1)
        return max;
    
    if (arr[idx] > max)
        max = arr[idx];
    
    return findMax(arr, idx - 1, max);
}
 
int main () {
    int n;
    cin >> n;
    ll arr[n];
 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
 
    cout << findMax(arr, n - 1, arr[n - 1]);
    return 0;
}
