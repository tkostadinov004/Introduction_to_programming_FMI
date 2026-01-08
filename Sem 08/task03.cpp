#include <iostream>

bool isLower(char c) {
	return c >= 'a' && c <= 'z';
}

unsigned countLower(const char* str) {
	unsigned count = 0;
	while (*str) {
		if (isLower(*str)) {
			count++;
		}
		str++;
	}
	return count;
}

const unsigned LOWERCASE_LETTERS = 26;

void fillOccurrences(const char* str, unsigned occurrences[]) {
	while (*str) {
		if (isLower(*str)) {
			occurrences[*str - 'a']++;
		}
		str++;
	}
}

void appendToResult(char* result, unsigned& index, char c, unsigned times) {
	for (unsigned i = 0; i < times; i++) {
		result[index++] = c;
	}
}

char* filterLowercaseSorted(const char* str) {
	if (!str) return nullptr;

	unsigned occurrences[LOWERCASE_LETTERS]{ 0 };
	fillOccurrences(str, occurrences);

	unsigned lowerCount = countLower(str);
	char* result = new char[lowerCount + 1];
	unsigned index = 0;
	for (unsigned i = 0; i < LOWERCASE_LETTERS; i++) {
		appendToResult(result, index, 'a' + i, occurrences[i]);
	}

	result[lowerCount] = '\0';
	return result;
}

int main()
{
	char* result = filterLowercaseSorted("1d83aazc");
	std::cout << result;
	delete[] result;
}
