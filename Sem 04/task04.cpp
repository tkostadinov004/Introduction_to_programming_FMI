#include <iostream>

void swap(unsigned& a, unsigned& b) {
	unsigned temp = a;
	a = b;
	b = temp;
}

void sort(unsigned& a, unsigned& b, unsigned& c) {
	if (a > b) {
		swap(a, b);
	}
	if (b > c) {
		swap(b, c);
	}
	if (a > b) {
		swap(a, b);
	}
}

int main() {
	unsigned a, b, c;
	std::cin >> a >> b >> c;
	sortVars(a, b, c);
	std::cout << a << " " << b << " " << c;
}
