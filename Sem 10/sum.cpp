#include <iostream>

unsigned sum(unsigned n) {
	if (n == 1) {
		return 1;
	}

	return n + sum(n - 1);
}

unsigned sumTail(unsigned n, unsigned result) {
	if (n == 0) {
		return result;
	}

	return sumTail(n - 1, result + n);
}

int main() {
	std::cout << sumTail(10, 0);
}