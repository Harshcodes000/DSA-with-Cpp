#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two integers (a and b): ";
    cin >> a >> b;

    // AND (&&)
    cout << "\n--- Logical Operators ---\n";
    cout << "(a > 0 && b > 0) : " << ((a > 0 && b > 0) ? 1 : 0) << "\n";

    // OR (||)
    cout << "(a > 0 || b > 0) : " << ((a > 0 || b > 0) ? 1 : 0) << "\n";

    // NOT (!)
    cout << "!(a > 0) : " << (!(a > 0) ? 1 : 0) << "\n";

    // Example using operator precedence / combinations
    cout << "\n--- Example Condition ---\n";
    cout << "Check: (a is even && b is positive)\n";
    cout << "(a % 2 == 0 && b > 0) : "
         << ((a % 2 == 0 && b > 0) ? 1 : 0) << "\n";

    return 0;
}

