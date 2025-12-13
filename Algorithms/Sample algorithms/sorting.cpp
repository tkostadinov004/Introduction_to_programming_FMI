#include <iostream>

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}


// Best-case time complexity: theta(n)
// Average-case time complexity: theta(n^2)
// Worst-case time complexity: theta(n^2)

// Best-case space complexity: theta(1)
// Average-case space complexity: theta(1)
// Worst-case space complexity: theta(1)

void bubbleSort(int* arr, unsigned size) {
	if (!arr) {
		return;
	}

	for (int i = 0; i < size; i++) {
		bool swapped = false;
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				swapped = false;
			}
		}
		if (!swapped) {
			break;
		}
	}
}

// Best-case time complexity: theta(n^2)
// Average-case time complexity: theta(n^2)
// Worst-case time complexity: theta(n^2)

// Best-case space complexity: theta(1)
// Average-case space complexity: theta(1)
// Worst-case space complexity: theta(1)

void selectionSort(int* arr, unsigned size) {
	if (!arr) {
		return;
	}

	for (int i = 0; i < size; i++) {
		int minIndex = i;
		for (int j = i + 1; j < size; j++) {
			if (arr[j] < arr[minIndex]) {
				minIndex = j;
			}
		}
		if (i != minIndex) {
			swap(arr[i], arr[minIndex]);
		}
	}
}

// Best-case time complexity: theta(n)
// Average-case time complexity: theta(n^2)
// Worst-case time complexity: theta(n^2)

// Best-case space complexity: theta(1)
// Average-case space complexity: theta(1)
// Worst-case space complexity: theta(1)

void insertionSort(int* arr, unsigned size) {
	if (!arr) {
		return;
	}

	for (int i = 1; i < size; i++) {
		int j = i - 1;
		int removed = arr[i];
		while (j >= 0 && arr[j] > removed) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = removed;
	}
}

// Best-case time complexity: theta(n + k)
// Average-case time complexity: theta(n + k)
// Worst-case time complexity: theta(n + k)

// Best-case space complexity: theta(n + k)
// Average-case space complexity: theta(n + k)
// Worst-case space complexity: theta(n + k)

// За да не използваме динамична памет, приемаме, че най-големият елемент в масива може да е 100 и може да има най-много 1000 елементи в него.
// По-долу е дадена и имплементация с динамична памет.
const int MAX = 100;
const int MAX_SIZE = 1000;
void countingSort(int* arr, unsigned size) {
	if (!arr) {
		return;
	}

	unsigned occurrences[MAX + 1]{ 0 };
	for (int i = 0; i < size; i++) {
		occurrences[arr[i]]++;
	}
	for (int i = 0; i < MAX; i++) {
		occurrences[i + 1] += occurrences[i];
	}

	int result[MAX_SIZE];
	for (int i = size - 1; i >= 0; i--) {
		occurrences[arr[i]]--;
		result[occurrences[arr[i]]] = arr[i];
	}
	for (int i = 0; i < size; i++) {
		arr[i] = result[i];
	}
}

void countingSort_dynamic(int* arr, unsigned size) {
	if (!arr) {
		return;
	}

	unsigned max = arr[0];
	for (int i = 0; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}

	unsigned* occurrences = new unsigned[max + 1] {0};
	for (int i = 0; i < size; i++) {
		occurrences[arr[i]]++;
	}
	for (int i = 0; i < max; i++) {
		occurrences[i + 1] += occurrences[i];
	}

	int* result = new int[size];
	for (int i = size - 1; i >= 0; i--) {
		occurrences[arr[i]]--;
		result[occurrences[arr[i]]] = arr[i];
	}
	for (int i = 0; i < size; i++) {
		arr[i] = result[i];
	}

	delete[] result; // !!!
	delete[] occurrences; // !!!
}

int main()
{

}