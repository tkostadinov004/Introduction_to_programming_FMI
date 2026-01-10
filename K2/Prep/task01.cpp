#include <iostream>

unsigned calculateDigitsCount(unsigned num) {
	if (num == 0) {
		return 1; // edge case
	}

	unsigned count = 0;
	while (num != 0) {
		count++;
		num /= 10;
	}

	return count;
}

unsigned calculateRLELength(const char* str) {
	if (!*str) { // equivalent to *str == '\0'
		return 0; // string is empty
	}

	unsigned resultLength = 0;
	unsigned currentSequenceLength = 0;
	char currentCharacter = str[0]; // string is certainly not empty, therefore it has at least 1 character
	while (*str) {
		if (*str == currentCharacter) {
			currentSequenceLength++;
		}
		else {
			unsigned digitsCount = calculateDigitsCount(currentSequenceLength);
			resultLength += 1 + digitsCount; // 1 place for letter + digitsCount places for each digit of the length

			currentCharacter = *str;
			currentSequenceLength = 1;
		}
		str++;
	}

	/*
		The last sequence in the input string won't be included in the calculations above because at a given moment we reach the sentinel '\0',
		therefore we need to add it when returning the result.
	*/
	return resultLength + 1 + calculateDigitsCount(currentSequenceLength); 
}

void appendNumberToResult(char* result, unsigned& putIndex, unsigned num) {
	if (num == 0) {
		result[putIndex++] = '0';
		return;
	}

	unsigned digitsCount = calculateDigitsCount(num);
	unsigned numberEndIndex = putIndex + digitsCount - 1;
	while (num > 0) {
		result[numberEndIndex] = (num % 10) + '0';
		num /= 10;
		numberEndIndex--;
	}
	putIndex += digitsCount;
}

char* runLengthEncoding(const char* str) {
	if (!str) {
		return nullptr;
	}
	else if (!*str) {
		return new char[1] {'\0'}; // input string is empty, therefore we return an empty string
	}

	unsigned resultLength = calculateRLELength(str);
	char* result = new char[resultLength + 1];
	unsigned putIndex = 0;

	char currentCharacter = str[0];
	unsigned currentSequenceLength = 0;
	while (*str) {
		if (*str == currentCharacter) {
			currentSequenceLength++;
		}
		else {
			result[putIndex++] = currentCharacter;
			appendNumberToResult(result, putIndex, currentSequenceLength);

			currentCharacter = *str;
			currentSequenceLength = 1;
		}
		str++;
	}

	result[putIndex++] = currentCharacter;
	appendNumberToResult(result, putIndex, currentSequenceLength);
	result[resultLength] = '\0';
	return result;
}

int main() {
	char* rle = runLengthEncoding("AAABBC");
	std::cout << rle;
	delete[] rle; // !!!
}
