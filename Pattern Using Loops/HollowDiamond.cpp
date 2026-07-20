#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;

    // Upper half of the diamond
    for (int i = 0; i < n; i++)
    {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // Print first star
        cout << "*";

        // Print spaces inside the hollow part
        if (i > 0)
        {
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << " ";
            }
            // Print second star
            cout << "*";
        }

        cout << "\n";
    }

    // Lower half of the diamond
    for (int i = n - 2; i >= 0; i--)
    {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // Print first star
        cout << "*";

        // Print spaces inside the hollow part
        if (i > 0)
        {
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << " ";
            }
            // Print second star
            cout << "*";
        }

        cout << "\n";
    }

    return 0;
}

/* Output for n = 5:

    *
   * *
  *   *
 *     *
*       *
 *     *
  *   *
   * *
    *

The diamond has (2n - 1) rows total.
*/

