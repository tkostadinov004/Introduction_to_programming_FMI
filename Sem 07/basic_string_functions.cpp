#include <iostream>

unsigned myStrlen(const char* str) {
	if (!str) {
		return 0;
	}
	unsigned length = 0;

	while (*str) {
		length++;
		str++;
	}
	return length;
}

void myStrcpy(char* dest, const char* src) {
	if (!dest || !src) {
		return;
	}

	while (*src) {
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}

void myStrcat(char* dest, const char* src) {
	if (!dest || !src) {
		return;
	}
	dest += myStrlen(dest);
	myStrcpy(dest, src);
}

int myStrcmp(const char* first, const char* second) {
	if (!first || !second) {
		return 0;
	}

	while (*first && *second) {
		if (*first != *second) {
			break;
		}
		first++;
		second++;
	}
	return *first - *second;
}

int myAtoi(const char* str) {
	int result = 0;
	while (*str) {
		int digit = *str - '0';
		result = result * 10 + digit;
		str++;
	}
	return result;
}

int main() {
	char str[40] = "abc";
	myStrcat(str, "def");
	std::cout << str;
}
