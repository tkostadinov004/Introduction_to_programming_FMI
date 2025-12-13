#include <iostream>

// Best-case time complexity: theta(1)
// Average-case time complexity: theta(log(num))
// Worst-case time complexity: theta(log(num))

// Best-case space complexity: theta(1)
// Average-case space complexity: theta(1)
// Worst-case space complexity: theta(1)

bool isPerfectSquare(unsigned num) {
    unsigned start = 1, end = num;
    while (start <= end) {
        unsigned mid = (start + end) / 2;
        if (mid * mid == num) {
            return true;
        }
        else if (mid * mid < num) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return false;
}

int main()
{
    
}