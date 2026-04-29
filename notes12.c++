//WAP to check the number is palindrome or not.
#include <iostream>
using namespace std;
int main() {
    int n, org, rev = 0;
    cin >> n;
    org = n;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    if (org == rev)
        cout << "Palindrome";
    else
        cout << "Not";
    return 0;
}