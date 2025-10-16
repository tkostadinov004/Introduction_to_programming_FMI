#include <iostream>

int main()
{
    unsigned a, b;
    std::cin >> a >> b;

    std::cout << (b != 0 && a % b == 0 ? "yes" : "no");
}