#include <iostream>

int main()
{
	unsigned num;
	std::cin >> num;
	
	bool isPrime = true;
	for (int i = 2; i <= num / i; i++) {
		if (num % i == 0) {
			isPrime = false;
			break;
		}
	}
	std::cout << (isPrime ? "prime" : "not prime");
}
