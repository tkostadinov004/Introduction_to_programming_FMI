#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;

    int larger = (a >= b) * a + (b > a) * b;
    std::cout << larger;
} 