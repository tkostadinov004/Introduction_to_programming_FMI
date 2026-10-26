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

bool isSubnum(unsigned a, unsigned b) {
	while (a != 0) {
		if (isSuffix(a, b)) {
			return true;
		}
		a /= 10;
	}
	return false;
}

int main() {
	unsigned a, b;
	std::cin >> a >> b;

	std::cout << isSubnum(a, b);
}
