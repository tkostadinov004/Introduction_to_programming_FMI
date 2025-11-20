#include <iostream>

void sieveNotPrimes(bool sieve[], unsigned currentPrime, 
                unsigned upperBound) {
    for (unsigned i = currentPrime * 2; i <= upperBound; i += currentPrime) {
        sieve[i] = false;
    }
}

void sieveOfEratosthenes(bool sieve[], unsigned upperBound) {
    for (unsigned i = 2; i <= upperBound; i++) {
        if (sieve[i]) {
            sieveNotPrimes(sieve, i, upperBound);
        }
    }
}

void printPrimes(bool sieve[], unsigned upperBound) {
    for (unsigned i = 0; i <= upperBound; i++) {
        if (sieve[i]) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

int main()
{
    const unsigned MAX_UPPER_BOUND = 1024;

    unsigned upperBound;
    std::cin >> upperBound;

    bool sieve[MAX_UPPER_BOUND + 1];
    sieve[0] = sieve[1] = false;
    for (unsigned i = 2; i <= upperBound; i++) {
        sieve[i] = true;
    }

    sieveOfEratosthenes(sieve, upperBound);
    printPrimes(sieve, upperBound);
}