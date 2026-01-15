#include <iostream>

unsigned myStrlen(const char* str) {
	unsigned length = 0;
	while (*str) {
		length++;
		str++;
	}

	return length;
}

bool isPalindrome(const char* str) {
	if (!str) {
		return false;
	}

	unsigned length = myStrlen(str);
	for (unsigned i = 0; i < length / 2; i++) {
		if (str[i] != str[length - 1 - i]) {
			return false;
		}
	}

	return true;
}

bool isPalindrome_rec(const char* str, unsigned start, unsigned end) {
	if (end <= start) {
		return true;
	}

	return str[start] == str[end] && isPalindrome_rec(str, start + 1, end - 1);
}

int main() {
	std::cout << isPalindrome("tacocat");
}
