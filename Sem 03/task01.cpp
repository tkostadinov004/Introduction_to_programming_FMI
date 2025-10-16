#include <iostream>

int main()
{
    unsigned a, b;
    std::cin >> a >> b;

    unsigned lcmCandidate = (a >= b ? a : b);
    while (lcmCandidate % a != 0 || lcmCandidate % b != 0) {
        lcmCandidate++;
    }

    std::cout << lcmCandidate;
}