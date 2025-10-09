#include <iostream>

int main()
{
    int num;
    std::cin >> num;

    bool isEven = num % 2 == 0;
    std::cout << isEven;
}