#include <iostream>
using namespace std;

void printInvertedPyramid (int stars, int spaces) {
    if (stars < 1)
        return;

    for (int i = 0; i < spaces; i++)
        printf(" ");

    for (int i = 0; i < stars; i++)
        printf("*");
    cout << '\n';
    printInvertedPyramid(stars - 2, spaces + 1);
}

int main () {
    int n;
    cin >> n;
    printInvertedPyramid(n * 2 - 1, 0);
    return 0;
}   

