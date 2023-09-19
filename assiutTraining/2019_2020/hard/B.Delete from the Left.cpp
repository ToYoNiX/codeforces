#include <iostream>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
int main ()
{
    fastio
    string s, t;
    cin >> s >> t;
    long long l1 = s.length(), l2 = t.length();

    if (s.back() != t.back())
    {
        cout << l1 + l2 << '\n';
        return 0;
    }

    int equal = 0, m = min(l1, l2);
    while (s.back() == t.back() && equal < m)
    {
        equal++;
        s.pop_back();
        t.pop_back();
    }

    cout << (l1 - equal) + (l2 - equal) << '\n';
    return 0;
}