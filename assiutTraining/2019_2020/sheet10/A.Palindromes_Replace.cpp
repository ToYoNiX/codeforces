#include <iostream>
#include <algorithm>
using namespace std;
 
int main ()
{
    string s;
    cin >> s;
    string r = s;
    reverse(r.begin(), r.end());
    int l = s.length();
 
    for (int i = 0; i < l; i++)
    {
        if (s[i] != r[i])
        {
            if (s[i] == '?' && r[i] != '?')
            {
                s[i] = r[i];
            }
            else if (s[i] != '?' && r[i] == '?')
            {
                continue;
            }
            else
            {
                cout << "-1\n";
                return 0;
            }
        }
        else if (s[i] == '?' && r[i] == '?')
        {
            s[i] = 'a';
        }
    }
 
    cout << s << '\n';
    return 0;
}
