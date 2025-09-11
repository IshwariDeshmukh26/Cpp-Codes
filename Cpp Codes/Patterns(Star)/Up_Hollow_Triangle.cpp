#include <iostream>
using namespace std;

int main() {
    int n = 4;

    for (int i = 1; i <= n; i++) 
    {
        // spaces before stars
        for (int k = 1; k <= n - i; k++) 
        {
            cout << "  "; // 2 spaces for alignment
        }
        // stars with gaps
        for (int j = 1; j <= i; j++) 
        {
            cout << "*   "; // star + spaces
        }
        cout << endl;
    }

    return 0;
}

//       *   
//     *   *
//   *   *   *
// *   *   *   *