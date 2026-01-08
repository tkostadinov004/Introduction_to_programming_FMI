bool isUpper(char c) {
	return c >= 'A' && c <= 'Z';
}

bool isLower(char c) {
	return c >= 'a' && c <= 'z';
}

unsigned countUpper(const char* str) {
	unsigned count = 0;
	while (*str) {
		if (isUpper(*str)) {
			count++;
		}
		str++;
	}
	return count;
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

void separateUpperAndLower(const char* str, char*& upper, char*& lower) {
	if (!str) return;

	unsigned upperCount = countUpper(str), lowerCount = countLower(str);
	upper = new char[upperCount + 1];
	lower = new char[lowerCount + 1];

	unsigned upperIndex = 0, lowerIndex = 0;
	while (*str) {
		if (isUpper(*str)) {
			upper[upperIndex++] = *str;
		}
		else if (isLower(*str)) {
			lower[lowerIndex++] = *str;
		}
		str++;
	}
	upper[upperCount] = lower[lowerCount] = '\0';
}

int main()
{
	char* upper;
	char* lower;
	separateUpperAndLower("I don't know, Chief!", upper, lower);
	std::cout << upper << std::endl << lower;

	delete[] upper;
	delete[] lower; // !!!
}
