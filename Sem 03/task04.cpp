#include <iostream>

int main()
{
	unsigned n;
	std::cin >> n;

	unsigned div = n / 2;
	while (n > 1) {
		bool isPrime = true;
		double root = sqrt(div);
		for (int i = 2; i <= root; i++) {
			if (div % i == 0) {
				isPrime = false;
				break;
			}
		}

		if (!isPrime) {
			div--;
			continue;
		}

		unsigned times = 0;
		while (n % div == 0) {
			times++;
			n /= div;
		}

		if (times > 0) {
			std::cout << div << "^" << times << " * ";
		}
		div--;
	}
}