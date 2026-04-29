#include <iostream>
using namespace std;

class Test {
public:
    void show(int a) {
        cout << "Integer: " << a << endl;
    }

    void show(double a) {
        cout << "Double: " << a << endl;
    }

    void show(int a, int b) {
        cout << "Two Integers: " << a << ", " << b << endl;
    }
};

int main() {
    Test t;
    t.show(5);
    t.show(3.5);
    t.show(2, 4);

    return 0;
}
