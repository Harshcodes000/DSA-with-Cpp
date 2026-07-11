#include <iostream>
using namespace std;

int main() {
    int x;
    do {
        cout << "Enter a positive number (0 or negative to stop): ";
        cin >> x;

        if (x > 0) {
            cout << "You entered: " << x << "\n";
        }
    } while (x > 0);

    cout << "Loop ended.\n";
    return 0;
}


