#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter an integer a: ";
    cin >> a;

    cout << "\nUnary operators:\n";
    cout << "+a  = " << (+a) << "\n";
    cout << "-a  = " << (-a) << "\n";

    cout << "++a (pre) = " << (++a) << "\n";
    cout << "a after ++ = " << a << "\n";
    cout << "a++ (post) = " << (a++) << "\n";

    cout << "!a = " << (!a) << "\n"; //Logical Not
    cout << "~a = " << (~a) << "\n"; //Bitwise Not

    return 0;
}

