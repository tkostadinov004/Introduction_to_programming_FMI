#include <iostream>

unsigned& prefixPlusPlus(unsigned& a) {
	a = a + 1;
	return a;
}

unsigned suffixPlusPlus(unsigned& a) {
	unsigned temp = a;
	a = a + 1;
	return temp;
}

int main() {
}
