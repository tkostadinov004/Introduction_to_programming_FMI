#include <iostream>

unsigned factorial(unsigned n) {
	unsigned result = 1;
	for (unsigned i = 1; i <= n; i++) {
		result *= i;
	}

	return result;
}

unsigned factorial_rec(unsigned n) {
	if (n <= 1) {
		return 1;
	}

	return n * factorial_rec(n - 1);
}

unsigned factorial_tail(unsigned n, unsigned result) {
	if (n <= 1) {
		return result;
	}

	return factorial_tail(n - 1, result * n);
}

int main() {
	std::cout << factorial_tail(5, 1);
}