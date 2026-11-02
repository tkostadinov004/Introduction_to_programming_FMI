#include <iostream>

long long fastPower(long long a, int n)
{
    long long result = 1;
    while (n > 0)
    {
        if (n % 2 != 0)
        {
            result = result * a;
        }
        a = a * a;
        n = n / 2;
    }
    return result;
}

int main() {
    long long a;
    int n;
    std::cin >> a >> n;
    std::cout << fastPower(a, n);
}
