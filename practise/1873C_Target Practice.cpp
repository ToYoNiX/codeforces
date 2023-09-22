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
        string x[10];
        for (int i = 0; i < 10; i++) {
            cin >> x[i];
        }
 
        ll total = 0;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (x[i][j] == 'X') {
                    int row = (i < 5) ? i + 1 : 10 - i,
                        column = (j < 5) ? j + 1 : 10 - j;
                    if (row < column)
                        total += row;
                    else
                        total += column;
                }       
            }
        }
 
        cout << total << '\n';
    }
    
    return 0;
}