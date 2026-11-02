#include <iostream>

// linear search
int findIndex(const int arr[], unsigned size, unsigned element) {
    for (unsigned i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i;
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

    std::cout << findIndex(arr, n, element);
}
