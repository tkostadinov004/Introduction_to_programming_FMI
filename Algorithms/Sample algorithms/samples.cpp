#include <iostream>

unsigned gcd(unsigned a, unsigned b) {
	unsigned min = a <= b ? a : b;
	for (unsigned i = min; i >= 1; i--) {
		if (a % i == 0 && b % i == 0) {
			return i;
		}
	}
	return a >= b ? a : b;
}

unsigned gcd_euclid(unsigned a, unsigned b) {
	while (b != 0) {
		unsigned rem = a % b;
		a = b;
		b = rem;
	}
	return a;
}

bool isPrime(unsigned num) {
	double root = sqrt(num);
	for (unsigned i = 2; i <= root; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}

int main()
{

}