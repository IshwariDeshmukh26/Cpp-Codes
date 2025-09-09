//Top left Side Pattern

#include <iostream>
using namespace std;

int main() {
    int n = 4;

    for (int i = n; i >= 1; i--) {
        // stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
