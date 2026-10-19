#include <iostream>

int main()
{
	unsigned a, b;
	std::cin >> a >> b;

	unsigned bound = a >= b ? a : b;
	unsigned lcm = 1;
	for (unsigned i = 2; i <= bound / 2; i++) {
		unsigned timesA = 0;
		while (a % i == 0) {
			timesA++;
			a /= i;
		}
		unsigned timesB = 0;
		while (b % i == 0) {
			timesB++;
			b /= i;
		}

		unsigned power = timesA >= timesB ? timesA : timesB;
		for (unsigned j = 0; j < power; j++) {
			lcm *= i;
		}
	}
	std::cout << lcm;
}
