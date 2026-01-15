#include <iostream>

unsigned fib(unsigned n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	
	return fib(n - 1) + fib(n - 2);
}

unsigned fib_memo(unsigned n, unsigned* memo) {
	if (n == 0 || n == 1) {
		return 1;
	}

	if (memo[n] != 0) {
		return memo[n];
	}

	return memo[n] = fib_memo(n - 1, memo) + fib_memo(n - 2, memo);
}

int main() {
	unsigned n;
	std::cin >> n;

	unsigned* memo = new unsigned[n + 1] {0};
	std::cout << fib_memo(n, memo);
	delete[] memo; // !!!
}