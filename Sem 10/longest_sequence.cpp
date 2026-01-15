#include <iostream>

unsigned myMax(unsigned a, unsigned b) {
	return a >= b ? a : b;
}

unsigned longestSequence(const char* str, char target, unsigned longest, unsigned currentLength) {
	if (*str == '\0') {
		return myMax(longest, currentLength);
	}

	if (*str == target) {
		return longestSequence(str + 1, target, longest, currentLength + 1);
	}
	else {
		return longestSequence(str + 1, target, myMax(longest, currentLength), 0);
	}
}

int main() {
	std::cout << longestSequence("aaabaaaaaba", 'a', 0, 0);
}