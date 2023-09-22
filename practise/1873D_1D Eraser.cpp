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
        ll n, k;
        string s;
        cin >> n >> k >> s;
 
        int total = 0;
        for (int i = 0; i < n;) {
            if (s[i] == 'B') {
                total++;
                i += k;
            }
            else
                i++;
        }
 
        cout << total << '\n';
    }
    
    return 0;
}