#include <iostream>

int main()
{
    unsigned a;
    std::cin >> a;
    unsigned number = 0;
    while (a>0)
    {
        unsigned current = a%10;
        number = number*10 + current;
        
        a = a / 10;
    }std::cout<<number;
}
