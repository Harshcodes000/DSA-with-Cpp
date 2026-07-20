#include <iostream>
using namespace std;

int main (){
    int n;
    cout<< "Enter the number: ";
    cin >> n;
    for (int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }

        for(int j=0;j<n-i;j++){
            cout<< i+1 ;
        }
        cout << "\n";
    

    }
    return 0;
}
/*Output:
Enter the number: 5
11111
 2222
  333
   44
    5
*/