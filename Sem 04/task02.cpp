#include <iostream>

unsigned reverse(unsigned num) {
	unsigned result = 0;
	while (num > 0) {
		result = result * 10 + num % 10;
		num /= 10;
	}
	return result;
}

int main() {
	unsigned num;
	std::cin >> num;
	std::cout << reverse(num);
}

