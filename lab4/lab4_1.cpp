#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num_terms = 10;
    double y1 = 0.1, y2 = -0.1;
    double yn;

    cout << "y1 = " << y1 << endl;
    cout << "y2 = " << y2 << endl;

    double y_prev2 = y1, y_prev1 = y2;
    for (int n = 3; n <= num_terms; ++n) {
        yn = (n / 3.0) * pow(y_prev2, 2) + ((n + 1) / 2.0) * pow(y_prev1, 2);
        cout << "y" << n << " = " << yn << endl;
        y_prev2 = y_prev1;
        y_prev1 = yn;
    }
    return 0;
}
