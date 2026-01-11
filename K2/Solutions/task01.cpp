#include <iostream>

unsigned myStrlen(const char* str) {
	unsigned length = 0;
	while (*str) {
		length++;
		str++;
	}

	return length;
}

void myStrcpy(char* destination, const char* source) {
	// we assume there is enough space in the destination to store the entire source
	while (*source) {
		*destination = *source;
		source++;
		destination++;
	}
	*destination = '\0';
}

void swap(char& a, char& b) {
	char temp = a;
	a = b;
	b = temp;
}

void reverse(char* str) {
	unsigned length = myStrlen(str);
	for (unsigned i = 0; i < length / 2; i++) {
		swap(str[i], str[length - 1 - i]);
	}
}

char* sum(const char* first, const char* second) {
	unsigned firstLength = myStrlen(first);
	unsigned secondLength = myStrlen(second);

	char* firstCopy = new char[firstLength + 1];
	char* secondCopy = new char[secondLength + 1];

	myStrcpy(firstCopy, first);
	myStrcpy(secondCopy, second);

	reverse(firstCopy);
	reverse(secondCopy);

	unsigned resultLength = firstLength >= secondLength ? firstLength : secondLength;
	char* result = new char[resultLength + 1];
	result[resultLength] = '\0';

	char* tempResult = result;

	unsigned carry = 0;

	char* firstCopyTmp = firstCopy;
	char* secondCopyTmp = secondCopy;
	while (*firstCopyTmp || *secondCopyTmp) {
		unsigned digitInFirst = *firstCopyTmp ? *firstCopyTmp - '0' : 0;
		unsigned digitInSecond = *secondCopyTmp ? *secondCopyTmp - '0' : 0;

		unsigned sum = digitInFirst + digitInSecond + carry;
		carry = sum / 10;
		sum %= 10;
		*(tempResult++) = sum + '0';

		if (*firstCopyTmp) {
			firstCopyTmp++;
		}
		if (*secondCopyTmp) {
			secondCopyTmp++;
		}
	}

	if (carry) {
		/*
			If, after the addition procedure ends, there is still carry, this means we have to add another digit for the result number.
			But we didn't allocate enough space - we allocated just enough to store max(length1, length2) characters.

			Take for example, first="999" and second="1". Then result will have 3 characters (+ 1 more for '\0').
			But the result of the sum is 1000, which will take 4 characters to store, not 3.
			So we create a new string which is a copy of the current result string but it has 1 more character allocated to it.
			At the end we will put the remaining carry. We put it at the end because the result is given in a reversed form.	
		*/
		char* newResult = new char[resultLength + 2];
		newResult[resultLength + 1] = '\0';

		myStrcpy(newResult, result);
		newResult[resultLength] = carry + '0';
		delete[] result;
		result = newResult;
	}

	reverse(result);

	delete[] firstCopy; //!!!
	delete[] secondCopy; //!!!
	return result;
}

int main()
{
	char* result = sum("1234567891234567891234", "15784263547851");
	std::cout << result;

	delete[] result; //!!!
}