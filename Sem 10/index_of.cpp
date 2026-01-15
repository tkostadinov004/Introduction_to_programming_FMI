#include <iostream>

int indexOf(const int* arr, unsigned size, unsigned x) {
	for (unsigned i = 0; i < size; i++) {
		if (arr[i] == x) {
			return i;
		}
	}

	return -1;
}

int indexOf_rec(const int* arr, unsigned size, unsigned index, unsigned x) {
	if (index == size) {
		return -1;
	}
	if (arr[index] == x) {
		return index;
	}

	return indexOf_rec(arr, size, index + 1, x);
}

int binarySearch(const int* arr, unsigned size, unsigned x) {
	unsigned start = 0, end = size - 1;

	while (start <= end) {
		unsigned mid = start + (end - start) / 2; // alternatively: (start + end) / 2

		if (arr[mid] == x) {
			return mid;
		}
		else if (x < arr[mid]) {
			end = mid - 1;
		}
		else {
			start = mid + 1;
		}
	}

	return -1;
}

int binarySearch_rec(const int* arr, unsigned start, unsigned end, unsigned x) {
	if (end < start) {
		return -1;
	}

	unsigned mid = start + (end - start) / 2; // alternatively: (start + end) / 2
	if (arr[mid] == x) {
		return mid;
	}
	else if (x < arr[mid]) {
		return binarySearch_rec(arr, start, mid - 1, x);
	}
	else {
		return binarySearch_rec(arr, mid + 1, end, x);
	}
}

int main() {
	const unsigned ARR_SIZE = 10;
	int arr[ARR_SIZE] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	std::cout << indexOf(arr, ARR_SIZE, 40);
}