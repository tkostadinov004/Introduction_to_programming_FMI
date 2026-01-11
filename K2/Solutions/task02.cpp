#include <iostream>

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

unsigned countSegments(const char* text, const char* separator) {
	unsigned count = 0;
	while (*text) {
		if (isPrefix(text, separator)) {
			count++;
		}
		text++;
	}

	return count;
}

unsigned getSegmentLength(const char* text, const char* separator) {
	unsigned length = 0;
	while (*text && !isPrefix(text, separator)) {
		length++;
		text++;
	}

	return length;
}

char* nextSegment(const char*& text, const char* separator) {
	unsigned segmentLength = getSegmentLength(text, separator);
	char* segment = new char[segmentLength + 1];
	unsigned putIndex = 0;

	while (*text && !isPrefix(text, separator)) {
		segment[putIndex++] = *text;
		text++;
	}
	
	// skipping the separator
	while (*text && *separator) {
		text++;
		separator++;
	}

	segment[segmentLength] = '\0';
	return segment;
}

void split(const char* text, const char* separator, char**& result, unsigned& segmentsCount) {
	if (!text || !separator) {
		return;
	}

	segmentsCount = countSegments(text, separator) + 1;
	/*
		Alternatively, we can allocate segmentsCount + 1 elements and set the last element to be nullptr, effectively being a sentinel.
		Then we won't have to return the count as well, we can just return the array of segments.
	*/
	result = new char* [segmentsCount] {0}; 
	unsigned putIndex = 0;

	while (*text) {
		result[putIndex++] = nextSegment(text, separator);
	}

	if (segmentsCount > 0 && !result[segmentsCount - 1]) { 
		// edge case: if the string ends with a separator, the last segment should be an empty string but it's not initialized, so we have to do this here
		result[segmentsCount - 1] = new char[1] {'\0'};
	}
}

void print(const char* const* segments, unsigned segmentsCount) {
	for (unsigned i = 0; i < segmentsCount; i++) {
		std::cout << segments[i] << std::endl;
	}
}

void freeMemory(char** segments, unsigned segmentsCount) {
	for (unsigned i = 0; i < segmentsCount; i++) {
		delete[] segments[i];
	}
	delete[] segments;
}

int main()
{
	char** segments;
	unsigned segmentsCount;

	split("ab@@cd", "@", segments, segmentsCount);

	print(segments, segmentsCount);
	freeMemory(segments, segmentsCount);
}