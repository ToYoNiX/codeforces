#include <iostream>
using namespace std;

void printPyramid (int stars, int spaces) {
    if (stars < 1)
        return;

    printPyramid(stars - 2, spaces + 1);

    for (int i = 0; i < spaces; i++)
        printf(" ");

    for (int i = 0; i < stars; i++)
        printf("*");
    cout << '\n';
}

int main () {
    int n;
    cin >> n;
    printPyramid(n * 2 - 1, 0);
    return 0;
}   
