#include <iostream>

int main()
{
	unsigned num;
	std::cin >> num;
	
	bool isPrime = true;
	double root = sqrt(num);
	for (int i = 2; i <= root; i++) {
		if (num % i == 0) {
			isPrime = false;
			break;
		}
	}
	std::cout << (isPrime ? "prime" : "not prime");
}