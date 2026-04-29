#include <iostream>
using namespace std;
class test{
    public:
    int x = 10;
    double y = 10.0;
    // function overloading
    void add(int a){
        cout << "The sum of x + a is " << x+a << endl;
    }
    void add(double b){
        cout << "The sum of y + b is " << y+b << endl;
    }
    void add(int c, int d){
        cout << "The sum of x + c + d is " << x+c+d << endl;
    }
};
int main() {
    test t;
    t.add(20);
    t.add(200.0);
    t.add(20, 30);

    return 0;
}
