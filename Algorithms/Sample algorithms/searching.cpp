#include <iostream>

// Best-case time complexity: theta(1)
// Average-case time complexity: theta(n)
// Worst-case time complexity: theta(n)

// Best-case space complexity: theta(1)
// Average-case space complexity: theta(1)
// Worst-case space complexity: theta(1)

int linearSearch(const int* arr, unsigned size, unsigned element) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == element) {
			return i;
		}
	}
	return -1;
}

// Best-case time complexity: theta(1)
// Average-case time complexity: theta(log(n))
// Worst-case time complexity: theta(log(n))

// Best-case space complexity: theta(1)
// Average-case space complexity: theta(1)
// Worst-case space complexity: theta(1)

int binarySearch(const int* arr, unsigned size, int element) {
	unsigned start = 0, end = size - 1;
	while (start <= end) {
		unsigned mid = (start + end) / 2;
		if (element == arr[mid]) {
			return mid;
		}
		else if (element < arr[mid]) {
			end = mid - 1;
		}
		else {
			start = mid + 1;
		}
	}
	return -1;
}

int main() 
{

}