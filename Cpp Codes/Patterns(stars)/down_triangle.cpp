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
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
