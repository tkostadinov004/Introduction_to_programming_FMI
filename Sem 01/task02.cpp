#include <iostream>

int main()
{
    char ch;
    std::cin >> ch;

    bool isUppercaseVowel = ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
    std::cout << isUppercaseVowel;
} 