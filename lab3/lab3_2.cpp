#include <iostream>
using namespace std;

int main() {
    int rows = 8;
    for (int i = 1; i <= rows; i++) {
        if (i % 2 == 1) {
            for (int j = i / 2 + 1; j >= 1; j--) {
                cout << j << " ";
            }
        } else {
            for (int j = i; j >= 2; j -= 2) {
                cout << j << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
