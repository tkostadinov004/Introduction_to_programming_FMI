#include <iostream>

// n - length of the first string, m - length of the second string
// Best-case time complexity: theta(n + m)
// Average-case time complexity: theta(n + m)
// Worst-case time complexity: theta(n + m)

// Best-case space complexity: theta(1)
// Average-case space complexity: theta(1)
// Worst-case space complexity: theta(1)

constexpr unsigned LETTERS_COUNT = 26;
bool isAnagram(const char* first, const char* second) {
    if (!first || !second) {
        return false;
    }

    unsigned occsInFirst[LETTERS_COUNT]{ 0 }, occsInSecond[LETTERS_COUNT]{ 0 };

    while (*first) {
        occsInFirst[*first - 'a']++;
        first++;
    }
    while (*second) {
        occsInSecond[*second - 'a']++;
        second++;
    }

    for (int i = 0; i < LETTERS_COUNT; i++)
    {
        if (occsInFirst[i] != occsInSecond[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    isAnagram("a", "b");
}