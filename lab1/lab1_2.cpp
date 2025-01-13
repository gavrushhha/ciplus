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
        std::cout << ((1/3) * sqrt((exp(x*x + y*y) + 5*x) 
        / ((pow(cos(x), 2)) + (pow(sin(x), 2))))) + (x/y);

}
