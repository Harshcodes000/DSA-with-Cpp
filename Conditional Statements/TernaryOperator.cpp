#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;

    // ternary operator: condition ? true_value : false_value
    string result = (a % 2 == 0) ? "Even" : "Odd";
    cout << "Result: " << result << "\n";

    return 0;
}



