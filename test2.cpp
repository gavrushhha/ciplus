#include <iostream>
#include <cmath>

int main()
{
    int x; std::cin >> x;
    if (x >= 100 && x <= 999)
    {
        std::cout << x / 100 << ' ' << x / 10 % 10 << ' ' << x % 10 << '\n';
        std::cout << (x / 100 * x / 10 % 10 *  x % 10) / (x / 100 + x / 10 % 10 +  x % 10) << '\n';
        std::cout << x % 10 * 100 + x / 10 % 10 * 10 + x/100;
    }
    else std::cout << "Error number";
}
