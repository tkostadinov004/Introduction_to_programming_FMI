#include <iostream>

// Best-case time complexity: theta(n^2)
// Average-case time complexity: theta(n^2)
// Worst-case time complexity: theta(n^2)

// Best-case space complexity: theta(1)
// Average-case space complexity: theta(1)
// Worst-case space complexity: theta(1)

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(int* arr, unsigned size) {
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

bool containsDuplicate(int* arr, unsigned size) {
    if (!arr) {
        return false;
    }

    selectionSort(arr, size);

    for (int i = 0; i < size - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            return true;
        }
    }
    return false;
}

int main()
{

}