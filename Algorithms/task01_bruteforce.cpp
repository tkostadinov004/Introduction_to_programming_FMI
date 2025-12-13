#include <iostream>

// Best-case time complexity: theta(1)
// Average-case time complexity: theta(sqrt(num))
// Worst-case time complexity: theta(sqrt(num))

// Best-case space complexity: theta(1)
// Average-case space complexity: theta(1)
// Worst-case space complexity: theta(1)

bool isPerfectSquare(unsigned num) {
    unsigned candidate = 1;
    while (candidate * candidate < num) {
        candidate++;
    }
    return candidate * candidate == num;
}

int main()
{
    
}