#include <iostream>

bool isDigit(char c) {
	return c >= '0' && c <= '9';
}

unsigned sumNumbers(const char* str, unsigned sum, unsigned currentNumber) {
	if (*str == '\0') {
		return sum + currentNumber;
	}

	if (isDigit(*str)) {
		return sumNumbers(str + 1, sum, currentNumber * 10 + (*str - '0'));
	}
	else {
		return sumNumbers(str + 1, sum + currentNumber, 0);
	}
}

int main() {
	std::cout << sumNumbers("AB37C10X", 0, 0);
}