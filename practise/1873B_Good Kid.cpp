#include <iostream>
#include <algorithm>
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
#define ll long long
int main () {
    fastio
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + n);
 
        ll total = arr[0] + 1;
        for (int i = 1; i < n; i++) {
            total *= arr[i];
        }
        cout << total << '\n';
    }
    
    return 0;
}