#include <iostream>

unsigned myMin(unsigned a, unsigned b) {
	return a <= b ? a : b;
}

unsigned minTimes(unsigned n) {
	if (n == 1) {
		return 0;
	}

	unsigned min = 1 + minTimes(n - 1);
	if (n % 2 == 0) {
		min = myMin(min, 1 + minTimes(n / 2));
	}
	if (n % 3 == 0) {
		min = myMin(min, 1 + minTimes(n / 3));
	}

	return min;
}

unsigned minTimes_memo(unsigned n, unsigned* memo) {
	if (n == 1) {
		return 0;
	}

	if (memo[n] != 0) {
		return memo[n];
	}

	unsigned min = 1 + minTimes_memo(n - 1, memo);
	if (n % 2 == 0) {
		min = myMin(min, 1 + minTimes_memo(n / 2, memo));
	}
	if (n % 3 == 0) {
		min = myMin(min, 1 + minTimes_memo(n / 3, memo));
	}

	return memo[n] = min;
}

int main() {
	unsigned n;
	std::cin >> n;

	unsigned* memo = new unsigned[n] {0};
	std::cout << minTimes_memo(n, memo);
	delete[] memo; // !!!
}