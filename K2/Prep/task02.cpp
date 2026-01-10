#include <iostream>

/*
	Checks if second is a prefix of first.
	For example, if first="abcd" and second="ab", then isPrefix(first, second) returns true.
	If first="abcd" and second="ac", then isPrefix(first, second) returns false
*/
bool isPrefix(const char* first, const char* second) {
	while (*second) {
		if (*first != *second) {
			return false;
		}
		first++;
		second++;
	}
	return true;
}

unsigned myStrlen(const char* str) {
	unsigned count = 0;
	while (*str) {
		count++;
		str++;
	}

	return count;
}

/*
	withOverlap
		- true if counting overlapping substrings
			- for example when text="aaa" and pattern="aa", we will return 2, since we have 2 substrings that
			  match "aa" - substring starting at index 0 and ending at index 1 (inclusive) and another substring starting at index 1 (inclusive) and ending at index 2.
			  They overlap but despite that we count them as separate
		- false if not countring overlapping substrings
			- if we take the example from above, we will return 1, instead of 2, since the only matching substring will be the
			  one starting at index 0 and ending at index 1 (inclusive). We will count it, then skip it, directly going to index 2.
*/
unsigned countOccurrences(const char* text, const char* pattern, bool withOverlap) {
	if (!text || !pattern) {
		return 0;
	}

	unsigned count = 0;
	while (*text) {
		if (isPrefix(text, pattern)) {
			count++;
			if (withOverlap) {
				text++;
			}
			else {
				text += myStrlen(pattern);
			}
		}
		else {
			text++;
		}
	}

	return count;
}

int main() {
	std::cout << countOccurrences("hello world", "ll", false) << std::endl;
	std::cout << countOccurrences("banana", "na", false) << std::endl;
	std::cout << countOccurrences("aaaaa", "aa", true) << std::endl;
	std::cout << countOccurrences("aaaaa", "aa", false) << std::endl;
}
