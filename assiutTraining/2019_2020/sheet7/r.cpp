#include <iostream>
#define ll long long
 
char IS_YES [][4] = {"NO", "YES"};
 
bool isPalindrome (ll *arr, int right, int left = 0) {
    right -= 1;
    if (left >= right)
        return true;
 
    if (arr[left] != arr[right])
        return false;
 
    return isPalindrome (arr, right, left + 1);
}
 
int main () {
    int n;
    scanf("%i", &n);
    ll a[n];
    for (int i = 0; i < n; i++)
        scanf("%lld", &a[i]);
 
    printf("%s\n", IS_YES[isPalindrome(a, n)]);
    return 0;
}
