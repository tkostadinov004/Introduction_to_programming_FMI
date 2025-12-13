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

unsigned countOccurrences(const char* str, char ch) {
	if (!str) {
		return 0;
	}

	unsigned count = 0;
	while (*str != '\0') {
		if (*str == ch) {
			count++;
		}
		str++;
	}
	return count;
}

void replace(char* str, char find, char repl) {
	if (!str) {
		return;
	}

	while (*str) {
		if (*str == find) {
			*str = repl;
		}
		str++;
	}
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

int main() {
	char str[40] = "abc";
	myStrcat(str, "def");
	std::cout << str;
}
