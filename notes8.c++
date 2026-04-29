//WAP to find a year is leap year or not.
#include <iostream>
using namespace std;
int main() {
    int year;
    cin >> year;
    if (year % 4 == 0)
        cout << "leap year";
    else
        cout << "Not";
    return 0;
}