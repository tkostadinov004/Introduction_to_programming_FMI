#include <iostream>

bool isLetter(char c) {
	return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

unsigned getWordsCount(const char* str) {
	unsigned count = 0;
	while (*str) {
		if (isLetter(*str) && !isLetter(*(str + 1))) {
			count++;
		}
		str++;
	}

	return count;
}

void skipInvalid(const char*& str) {
	while (*str && !isLetter(*str)) {
		str++;
	}
}

char* getWord(const char*& str) {
	unsigned length = 0;
	while (isLetter(*str)) {
		length++;
		str++;
	}
	str -= length;

	char* word = new char[length + 1];
	unsigned index = 0;
	while (isLetter(*str)) {
		word[index] = *str;
		str++;
		index++;
	}
	word[length] = '\0';

	return word;
}

char** tokenize(const char* str) {
	if (!str) return nullptr;

	unsigned wordsCount = getWordsCount(str);
	char** result = new char* [wordsCount + 1];
	result[wordsCount] = nullptr;
	unsigned index = 0;

	while (*str) {
		skipInvalid(str);

		if (!(*str)) {
			break;
		}

		char* currentWord = getWord(str);
		result[index] = currentWord;
		index++;
	}
	return result;
}

void print(char** tokens) {
	while (*tokens) {
		std::cout << *tokens << std::endl;
		tokens++;
	}
}

void freeMemory(char** matrix) {
	unsigned index = 0;
	while (matrix[index]) {
		delete matrix[index];
		index++;
	}
	delete[] matrix;
}

int main()
{
	char** tokens = tokenize("Im! in FMI?");
	print(tokens);
	freeMemory(tokens); //!!!
}
