#include <iostream>

int main()
{
	unsigned n;
	std::cin >> n;
	for (int i = 2; i < n; i++) {
		unsigned times = 0;
		while (n % i == 0) {
			times++;
			n /= i;
		}

		if (times > 0) {
			std::cout << i << "^" << times << " * ";
		}
	}
}