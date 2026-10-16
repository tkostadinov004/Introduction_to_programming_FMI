#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;

    int maxNum = (a >= b) * a + (a < b) * b;
    std::cout << maxNum;
} 
