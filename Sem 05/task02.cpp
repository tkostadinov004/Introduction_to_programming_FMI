#include <iostream>

int binarySearch(const int arr[], unsigned size, int element) {
    int start = 0;
    int end = size - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == element) {
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
    const unsigned MAX_SIZE = 1024;

    unsigned n;
    std::cin >> n;

    int arr[MAX_SIZE];
    for (unsigned i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    unsigned element;
    std::cin >> element;

    std::cout << binarySearch(arr, n, element);
}
