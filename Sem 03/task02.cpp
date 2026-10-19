#include <iostream>

int main()
{
    unsigned a, b;
    std::cin >> a >> b;

    if (a > b) {
        unsigned temp = a;
        a = b;
        b = temp;
    }

    while (b != 0) {
        unsigned rem = a % b;
        a = b;
        b = rem;
    }

    std::cout << a;
}