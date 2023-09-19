#include <iostream>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    ll n, lasteven = 0, lastodd = 0, evens = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        ll a;
        cin >> a;
        if (a % 2 == 0)
        {
            evens++;
            lasteven = i;
        }
        else
        {
            evens--;
            lastodd = i;
        }
    }
    
    cout << (evens > 0 ? lastodd : lasteven) << '\n';
    return 0;
}