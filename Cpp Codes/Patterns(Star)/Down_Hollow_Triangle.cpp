#include <iostream>
using namespace std;

int main() 
{
    int n = 4;

    for (int i = n; i >= 1; i--) 
    {
        // spaces before stars
        for (int s = 1; s <= n - i; s++) 
        {
            cout << "  "; // 2 spaces for alignment
        }
        // stars with gaps
        for (int j = 1; j <= i; j++) 
        {
            cout << "*   ";
        }
        cout << endl;
    }

    return 0;
}

//  *   *     *    *
//    *    *     *
//      *    *
//         *



