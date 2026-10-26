#include <iostream>

unsigned myPow(unsigned a, unsigned b) {
	unsigned result = 1;
	for (int i = 0; i < b; i++) {
		result = result * a;
	}
	return result;
}

int main() {
	unsigned a, b;
	std::cin >> a >> b;
	std::cout << myPow(a, b);
}
