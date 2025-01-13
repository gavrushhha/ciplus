#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

int main() {
    double x;
    cout << "Введите x: ";
    cin >> x;
    try {
        if (x * x + 2 * x + 1 == 0) {
            throw runtime_error("Деление на ноль");
        }
        if (x + 5 < 0) {
            throw runtime_error("Корень из отрицательного числа");
        }
        if (8 - 2 * x <= 0) {
            throw runtime_error("Логарифм неположительного числа");
        }
        double numerator = sqrt(x + 5) + log(8 - 2 * x);
        double denominator = sqrt(x * x + 2 * x + 1);
        double result = numerator / denominator;

        cout << "Результат: " << result << endl;

    } catch (const runtime_error& e) {
        cout << "Ошибка: " << e.what() << endl;
    }

    return 0;
}
