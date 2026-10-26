#include <iostream>

unsigned reverse(unsigned num) {
	unsigned result = 0;
	while (num > 0) {
		result = result * 10 + num % 10;
		num /= 10;
	}
	return result;
}

bool isPalindrome(unsigned num) {
	return num == reverse(num);
}

int main() {
	unsigned num;
	std::cin >> num;
	std::cout << isPalindrome(num);
}

