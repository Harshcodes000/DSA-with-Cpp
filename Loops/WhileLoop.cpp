#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter numbers (enter 0 to stop):\n";

    int sum = 0;
    while (true) {
        cin >> x;
        if (x == 0) break;
        sum += x;
    }

    cout << "Sum = " << sum << "\n";
    return 0;
}



