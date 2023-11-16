#include <iostream>
#define ll long long
using namespace std;
 
ll logBase2 (ll n) {
    if (n == 1)
        return 0;
 
    return 1 + logBase2(n / 2);
}
 
int main () {
    ll n;
    cin >> n;
    cout << logBase2 (n) << endl;
    return 0;
}
