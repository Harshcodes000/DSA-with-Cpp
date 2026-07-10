#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks (0-100): ";
    cin >> marks;

    if (marks >= 90) {
        cout << "Grade: A\n";
    } else if (marks >= 75) {
        cout << "Grade: B\n";
    } else if (marks >= 60) {
        cout << "Grade: C\n";
    } else {
        cout << "Grade: D (Fail)\n";
    }

    return 0;
}


