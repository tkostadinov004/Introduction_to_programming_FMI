#include <iostream>

unsigned myStrlen(const char* str) {
	unsigned count = 0;
	while (*str) {
		count++;
		str++;
	}
	return count;
}

bool isDigit(char ch) {
	return ch >= '0' && ch <= '9';
}

unsigned countDigits(const char* str) {
	unsigned count = 0;
	while (*str) {
		if (isDigit(*str)) {
			count++;
		}
		str++;
	}
	return count;
}

unsigned countNumbers(const char* str) {
	unsigned count = 0;
	while (*str) {
		if (isDigit(*str) && !isDigit(*(str + 1))) {
			count++;
		}
		str++;
	}
	return count;
}

char* censorNumbers(const char* str) {
	if (!str) {
		return nullptr;
	}

	unsigned resultSize = myStrlen(str) - countDigits(str) + countNumbers(str);
	char* result = new char[resultSize + 1];
	int index = 0;

	while (*str) {
		if (!isDigit(*str)) {
			result[index++] = *str;
		}
		else if (!isDigit(*(str + 1))) {
			result[index++] = '*';
		}
		
		str++;
	}
	result[resultSize] = '\0';

	return result;
}

int main() {
	char* result = censorNumbers("0b123caad22");
	std::cout << result;

	delete[] result; //!!!
}