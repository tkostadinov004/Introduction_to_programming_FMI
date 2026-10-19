#include <iostream>

int main()
{
	unsigned n;
	std::cin >> n;

	for (unsigned i = n; i > 1 && n > 1; i--) {
		bool isPrime = true;
		for (unsigned j = 2; j <= i / j; j++) {
			if (i % j == 0) {
				isPrime = false;
				break;
			}
		}
		if (!isPrime) {
			continue;
		}

		unsigned times = 0;
		while (n % i == 0) {
			times++;
			n /= i;
		}

		if (times > 0) {
			std::cout << i << "^" << times << " ";
		}
	}
}
