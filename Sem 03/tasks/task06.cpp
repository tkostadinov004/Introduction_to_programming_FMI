#include <iostream>

int main()
{
    unsigned n;
    std::cin >> n;
    if (n < 2)
    {
        std::cout << "Enter at least 2 numbers!";
    }
    else
    {
        unsigned max = 1;
        unsigned max2 = 1;
        for (unsigned i = n; i >= 1; i--)
        {
            unsigned current;
            std::cin >> current;
            if (current > max2)
            {
                if (current > max)
                {
                    max2 = max;
                    max = current;
                }
                else
                {
                    max2 = current;
                }
            }
        }
        std::cout << "Max: " << max << "\nSecond to max: " << max2;
    }

}
