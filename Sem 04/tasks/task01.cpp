#include <iostream>

bool isAscending(unsigned n)
{
    while (n >= 10)
    {
        unsigned lastDigit = n % 10;
        unsigned previousDigit = (n / 10) % 10;
        if (previousDigit > lastDigit)
        {
            return false;
        }
        n = n/10;
    }
    return true;
}

bool isDescending(unsigned n)
{
    while (n >= 10)
    {
        unsigned lastDigit = n % 10;
        unsigned previousDigit = (n / 10) % 10;
        if (previousDigit < lastDigit)
        {
            return false;
        }
        n = n / 10;
    }
    return true;
}

bool isSorted(unsigned n)
{
    return isAscending(n) || isDescending(n);
}

int main()
{
    unsigned num;
    std::cin >> num;
    std::cout << std::boolalpha << isSorted(num);
}
