#include <iostream>

unsigned countOccurrences(unsigned num, unsigned digit) {
	if (num == 0) {
		return digit == 0;
	}

	unsigned count = 0;
	while (num > 0) {
		unsigned lastDigit = num % 10;
		if (lastDigit == digit) {
			count++;
		}
		num /= 10;
	}
	return count;
}

void concatOnce(unsigned& num, unsigned digit) {
	num = num * 10 + digit;
}

void concat(unsigned& num, unsigned digit, unsigned times) {
	for (unsigned i = 0; i < times; i++) {
		concatOnce(num, digit);
	}
}

unsigned sortDescending(unsigned num) {
	unsigned result = 0;

	for (int digit = 9; digit >= 0; digit--) {
		unsigned occurrences = countOccurrences(num, digit);
		concat(result, digit, occurrences);
	}

	return result;
}

int main() {
	unsigned num = 8194826;
	std::cout << sortDescending(num);
}
