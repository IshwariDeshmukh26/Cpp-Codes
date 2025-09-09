//Top left side pattern

#include <iostream>
using namespace std;

int main() {
    int n = 4;

    for (int i = n; i >= 1; i--) {
        // spaces
        for (int s = 0; s < n - i; s++) {
            cout << " ";
        }
        // stars
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
