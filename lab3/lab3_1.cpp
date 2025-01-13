#include <iostream>
// using namespace std;

int main() {
    int n;
    std::cout << "Введите число: ";
    std::cin >> n;
    std::cout << "Простые множители числа " << n << " : ";
    while (n % 2 == 0) {
        std::cout << 2 << "*";
        n /= 2;
    }
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            std::cout << i << "*";
            n /= i;
        }
    }
    if (n > 2)
        std::cout << n;

    return 0;
}