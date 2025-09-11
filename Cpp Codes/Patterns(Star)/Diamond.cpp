#include <iostream>
using namespace std;

int main() 
{
    int n = 4;

    // upper triangle
    for (int i = 1; i <= n; i++) 
    {
        // spaces
        for (int s = 0; s < n - i; s++) 
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= i; j++) 
        {
            cout << "* ";
        }
        cout << endl;
    }

    // lower triangle
    for (int i = n - 1; i >= 1; i--) 
    {
        // spaces
        for (int s = 0; s < n - i; s++) 
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= i; j++) 
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
