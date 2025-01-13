#include <iostream>
#include <cmath>

int main()
{
    double x, y;
    std::cin >> x >> y;
    if (y - x * x == 1) std::cout << "/0";
    else if (y - x * x <= 0) std::cout << "log of neg";
    else if (y * x < 0) std::cout << "sqrt of neg";
    else
        std::cout << (pow(sin(x-3), 2) + exp(sqrt(x*y)))/log(y-x*x);

}
