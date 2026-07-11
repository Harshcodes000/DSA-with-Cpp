#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array elements: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << "\n";

    // Example: you can also use n if you prefer classic indexing
    cout << "n = " << n << "\n";

    return 0;
}



