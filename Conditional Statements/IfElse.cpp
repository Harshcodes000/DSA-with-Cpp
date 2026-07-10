#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num >= 0) {
        cout << "The number is non-negative.\n";
    } else {
        cout << "The number is negative.\n";
    }

    return 0;
}

