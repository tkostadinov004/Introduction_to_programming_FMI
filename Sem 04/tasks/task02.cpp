#include <iostream>

long long fastPower(long long a, int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n % 2 == 0)
    {
        return fastPower(a * a, n / 2);
    }
    else
    {
        return a * fastPower(a, n - 1);
    }
}

int main()
{
    long long a;
    int n;    
    std::cin >> a >> n;
    std::cout << fastPower(a, n);
}
