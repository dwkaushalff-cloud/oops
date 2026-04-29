#include <iostream>
#include <vector>
using namespace std;

int main(){

    int a = 10;
    int *p = &a;
    int **q = &p;

    cout << *p << endl;
    cout << **q << endl;
    cout << &a << endl;
    cout << *q << endl;
    return 0;
}