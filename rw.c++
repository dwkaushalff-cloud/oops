#include <iostream>
using namespace std;

class BankAccount {
public:
    string name;
    int balance;

    // Constructor
    BankAccount(string n, int b) {
        name = n;
        balance = b;
    }

    // Deposit (Arithmetic + Assignment)
    void deposit(int amount) {
        balance += amount;   // += operator
        cout << "Deposited: " << amount << endl;
    }

    // Withdraw (Relational + Logical + Assignment)
    void withdraw(int amount) {
        if (amount > 0 && amount <= balance) {   // >, &&, <=
            balance -= amount;   // -= operator
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Invalid withdrawal!" << endl;
        }
    }

    // Show Balance (Conditional operator)
    void showBalance() {
        string status = (balance > 0) ? "Active" : "Empty";  // ?:
        cout << "Balance: " << balance << " (" << status << ")" << endl;
    }
};

int main() {

    // Object creation (new operator)
    BankAccount *acc = new BankAccount("Kaushal", 1000);

    // Pointer operator (->)
    acc->deposit(500);
    acc->withdraw(300);

    // Increment / Decrement
    acc->balance++;   // ++
    acc->balance--;   // --

    // Relational + Logical
    if (acc->balance != 0 || acc->balance > 100) {   // !=, ||
        cout << "Account is usable\n";
    }

    // Bitwise operators
    int a = 5, b = 3;
    cout << "Bitwise AND: " << (a & b) << endl;  // &
    cout << "Bitwise OR: " << (a | b) << endl;   // |
    cout << "XOR: " << (a ^ b) << endl;          // ^
    cout << "Left Shift: " << (a << 1) << endl;  // <<
    cout << "Right Shift: " << (a >> 1) << endl; // >>

    // sizeof operator
    cout << "Size of balance: " << sizeof(acc->balance) << endl;

    // Address and pointer
    int x = 10;
    int *ptr = &x;   // &
    cout << "Value using pointer: " << *ptr << endl; // *

    // Array operator []
    int arr[3] = {1,2,3};
    cout << "Array element: " << arr[1] << endl;

    // Scope resolution ::
    cout << "Using std::cout with scope resolution\n";

    // Delete (memory free)
    delete acc;

    return 0;
}
