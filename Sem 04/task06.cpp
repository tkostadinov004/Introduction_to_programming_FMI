#include <iostream>

unsigned reverse(unsigned num) {
	unsigned result = 0;
	while (num != 0) {
		result = result * 10 + num % 10;
		num /= 10;
	}
	return result;
}

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

bool isPrefix(unsigned a, unsigned b) {
	//return isSuffix(reverse(a), reverse(b)); - one option

	while (a != 0) {
		if (a == b) {
			return true;
		}
		a /= 10;
	}
	return false;
}

int main() {
	unsigned a, b;
	std::cin >> a >> b;

	std::cout << isPrefix(a, b);
}
