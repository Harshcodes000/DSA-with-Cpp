#include <iostream>

using namespace std;

int main(){
    int n,c=1;
    cout << "Enter a number: ";
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i+1; j++)
        {
            cout << c <<" ";
            c++;
        }
        cout << "\n";
    }
    return 0;

}
/*Output:
Enter a number: 4
1
2 3
4 5 6
7 8 9 10
*/