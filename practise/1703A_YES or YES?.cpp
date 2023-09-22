#include <iostream>
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t--) {
	string s;
	cin >> s;
	if (toupper(s[0]) == 'Y' && toupper(s[1]) == 'E' && toupper(s[2]) == 'S')
	    cout << "YES\n";
	else
	    cout << "NO\n";
    }
    return 0;
}
