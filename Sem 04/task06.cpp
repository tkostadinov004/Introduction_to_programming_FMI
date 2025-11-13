#include <iostream>

unsigned myLog(unsigned a, unsigned b) {
	unsigned result = 1; // a^0
	unsigned times = 0;
	while (result < b) {
		result = result * a;
		times++;
	}
	return times;
}

int main() {
	unsigned a, b;
	std::cin >> a >> b;
	std::cout << myLog(a, b);
}
