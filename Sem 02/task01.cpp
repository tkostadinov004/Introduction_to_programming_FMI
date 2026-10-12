#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;

    bool isADivisibleByB = b != 0 && a % b == 0;
    std::cout << isADivisibleByB;
} 