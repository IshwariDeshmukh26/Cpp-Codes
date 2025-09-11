#include <iostream>
using namespace std;

int main() {
    int n = 4;

    for (int i = 1; i <= n; i++) {
        // spaces
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        // stars
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

//Output
//    *
//   ***
//  *****
// *******