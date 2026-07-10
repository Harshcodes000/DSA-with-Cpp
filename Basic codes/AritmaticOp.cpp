#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two integers (a and b): ";
    cin >> a >> b;

    cout << "\n--- Arithmetic Operators ---\n";
    cout << "a + b = " << (a + b) << "\n";
    cout << "a - b = " << (a - b) << "\n";
    cout << "a * b = " << (a * b) << "\n";

    if (b != 0) {
        cout << "a / b = " << (a / b) << "\n";
        cout << "a % b = " << (a % b) << "\n";
    } else {
        cout << "undefined (division by zero)\n";
        cout << "undefined (modulus by zero)\n";
    }

    return 0;
}

// Compile : g++ AritmaticOp.cpp
// Run     : ./a.out

