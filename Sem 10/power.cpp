#include <iostream>

unsigned power(unsigned a, unsigned b) {
	unsigned result = 1;
	for (unsigned i = 0; i < b; i++) {
		result *= a;
	}
	return result;
}

unsigned fastPower(unsigned a, unsigned b) {
	if (b == 0) {
		return 1;
	}
	if (a == 0) {
		return 0;
	}

	if (b % 2 == 0) {
		return fastPower(a * a, b / 2);
	}
	else {
		return a * fastPower(a * a, (b - 1) / 2);
	}
}

int main() {
	std::cout << fastPower(3, 13);
}