#include <iostream>

bool isSuffix(unsigned a, unsigned b) {
	while (b != 0) {
		if (a % 10 != b % 10) {
			return false;
		}
		a /= 10;
		b /= 10;
	}
	return true;
}

int main() {
	unsigned a, b;
	std::cin >> a >> b;

	std::cout << isSuffix(a, b);
}
