#include <iostream>

using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // Print spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // Print increasing numbers (1 to i+1)
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j;
        }

        // Print decreasing numbers (i down to 1)
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }

        cout << "\n";
    }
    return 0;
}

