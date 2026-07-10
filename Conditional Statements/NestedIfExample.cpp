#include <iostream>
using namespace std;

int main() {
    int age;
    bool hasID;

    cout << "Enter age: ";
    cin >> age;

    cout << "Do you have an ID? (1 for yes, 0 for no): ";
    cin >> hasID;

    if (age >= 18) {
        if (hasID) {
            cout << "Allowed\n";
        } else {
            cout << "Not allowed: ID required\n";
        }
    } else {
        cout << "Not allowed: Age must be 18+\n";
    }

    return 0;
}


