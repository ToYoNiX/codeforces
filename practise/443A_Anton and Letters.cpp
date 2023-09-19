#include <iostream>
#include <set>
#define ll long long
#define fastio ios_base::sync_with_stdio(false); ios::sync_with_stdio(false);cin.tie(0); cout.tie(0);
using namespace std;
int main ()
{
    fastio
    string s;
    getline(cin, s);
    int l = s.length();
    set <char> st;
    
    for (int i = 0; i < l; i++)
    {
        if (isalpha(s[i]))
        {
            st.insert(s[i]);
        }
    }

    cout << st.size() << '\n';
    return 0;
}