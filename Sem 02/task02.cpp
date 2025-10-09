#include <iostream>

int main()
{
    int num;
    std::cin >> num;

    if (num < 100) {
        std::cout << "Less than 100";
    }
    else if (num <= 200) {
        // can also be num >= 100 && num <= 200 but we can omit the first check since we're certain that num is NOT less than 100
        std::cout << "Between 100 and 200";
    }
    else {
        std::cout << "Greater than 200";
    }
}