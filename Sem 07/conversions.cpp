#include <iostream>

unsigned fromDecimalToBinary(unsigned num) {
    unsigned result = 0;
    unsigned mult = 1;

    while (num > 0) {
        if (num % 2 == 1) {
            result += mult;
        }
        mult *= 10;
        num /= 2;
    }

    return result;
}

unsigned fromBinaryToDecimal(unsigned num) {
    unsigned result = 0;
    unsigned mult = 1;
    while (num > 0) {
        if (num % 2 == 1) {
            result += mult;
        }
        mult *= 2;
        num /= 10;
    }
    return result;
}

int main() {
    std::cout << fromBinaryToDecimal(fromDecimalToBinary(37));
}
