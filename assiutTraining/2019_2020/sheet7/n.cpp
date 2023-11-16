#include <iostream>
#include <vector>
using namespace std;

int r, c, a;

vector <int> columnSum (vector <int> arr1, vector <int> &arr2, int idx = 0) {
    if (idx == c)
        return arr1;

    arr1[idx] += arr2[idx];
    return columnSum (arr1, arr2, idx + 1);
}

vector <vector <int>> calcSum(vector <vector <int>> arr1, vector <vector <int>> &arr2, int row = 0) {
    if (row == r)
        return arr1;

    arr1[row] = columnSum (arr1[row], arr2[row]);
    return calcSum (arr1, arr2, row + 1);
}

int main () {
    cin >> r >> c;
    vector <vector <int>> mat1, mat2;
    for (int i = 0; i < r; i++) {
        vector <int> temp;
        for (int j = 0; j < c; j++) {
            cin >> a;
            temp.push_back(a);
        }
        mat1.push_back(temp);
    }

    for (int i = 0; i < r; i++) {
        vector <int> temp;
        for (int j = 0; j < c; j++) {
            cin >> a;
            temp.push_back(a);
        }
        mat2.push_back(temp);
    }

    vector <vector <int>> ans = calcSum(mat1, mat2);

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            cout << ans[i][j] << ' ';
        cout << '\n';
    }

    return 0;
}
