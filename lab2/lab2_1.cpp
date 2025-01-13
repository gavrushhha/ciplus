#include <iostream>
#include <cmath>

int main()
{
    int x; std::cin >> x;
    if (x >= 100 && x <= 999)
    {
        int a = x / 100;
        int b = (x / 10) % 10; 
        int c = x % 10; 
        if (a % 6 == 0 && b % 4 == 0){
            a = (a + 1) % 10;
            b = (b + 1) % 10;
            c = (c + 1) % 10;
        }
        else if (a % 6 == 0 && c % 6 == 0){
            a = (a * 3) % 10;
            b = (b * 3) % 10;
            c = (c * 3) % 10;
        }
        else if (b % 4 == 0 && c % 4 == 0){
            a = (a + 5) % 10;
            b = (b + 5) % 10;
            c = (c + 5) % 10;
        }
        else if (a % 6 == 0 && b % 6 == 0 && c % 6 == 0){
            a = (a - 2 + 10) % 10; 
            b = (b - 2 + 10) % 10;
            c = (c - 2 + 10) % 10;
        }
        else{
            a = (a * 2) % 10;
            b = (b * 2) % 10;
            c = (c * 2) % 10;
        }

        std::cout << a * 100 + b * 10 + c;
    }
    else std::cout << "Error number";
}
