#include <iostream>

const unsigned OCCURRENCES_SIZE = 256;

void countOccurrences(const char* str, unsigned* occurrences) {
	while (*str) {
		occurrences[*str]++;
		str++;
	}
}

unsigned countUnique(const unsigned* occurrences) {
	unsigned resultSize = 0;
	for (unsigned i = 0; i < OCCURRENCES_SIZE; i++) {
		if (occurrences[i] == 1) {
			resultSize++;
		}
	}

	return resultSize;
}

char* keepUnique(const char* str) {
	if (!str) {
		return nullptr;
	}

	unsigned occurrences[OCCURRENCES_SIZE]{ 0 };
	countOccurrences(str, occurrences);

	unsigned resultSize = countUnique(occurrences);
	char* result = new char[resultSize + 1];
	unsigned index = 0;
	while (*str) {
		if (occurrences[*str] == 1) {
			result[index] = *str;
			index++;
		}
		str++;
	}
	result[index] = '\0';
	return result;
}

int main() {
	char* result = keepUnique("akalhk3g*5ggkkks");
	std::cout << result;
	delete[] result; // !!!
}