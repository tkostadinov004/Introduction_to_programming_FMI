#include <iostream>

bool isPrime(unsigned num) {
	double root = sqrt(num);
	for (int i = 2; i <= root; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}

int main()
{
	unsigned a, b;
	std::cin >> a >> b;

	std::cout << (isPrime(a) && isPrime(b));
}