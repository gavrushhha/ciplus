#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a = 1.0;
    double q = 0.5;
    double term = a; 
    double sum = 0.0;
    double epsilon = 1e-10; 
    int n = 1;
    while (term > epsilon) { 
        sum += term; 
        term *= q;
        n++;
    }
    cout << "Сумма ряда (с точностью " << epsilon << "): " << sum << endl;
    cout << "Точное значение суммы: " << a / (1 - q) << endl;
    return 0;
}
