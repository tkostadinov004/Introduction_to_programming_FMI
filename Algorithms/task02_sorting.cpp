#include <iostream>

// n - length of the first string, m - length of the second string
// Best-case time complexity: theta(n^2 + m^2)
// Average-case time complexity: theta(n^2 + m^2)
// Worst-case time complexity: theta(n^2 + m^2)

// Best-case space complexity: theta(1)
// Average-case space complexity: theta(1)
// Worst-case space complexity: theta(1)

void swap(char& a, char& b) {
	char temp = a;
	a = b;
	b = temp;
}

char* findMinElementPtr(char* start) {
	char* minElement = start;
	while (*start) {
		if (*start < *minElement) {
			minElement = start;
		}
		start++;
	}
	return minElement;
}

void sort(char* str) {
	while (*str) {
		char* minElement = findMinElementPtr(str);
		
		if (minElement != str) {
			swap(*minElement, *str);
		}
		str++;
	}
}

bool isAnagram(char* first, char* second) {
	if (!first || !second) {
		return false;
	}

	sort(first);
	sort(second);

	while (*first && *second && *first == *second) {
		first++;
		second++;
	}
	return *first == *second;
}

int main()
{
	char first[] = "anagram";
	char second[] = "nagaram";
	std::cout << isAnagram(first, second);
}