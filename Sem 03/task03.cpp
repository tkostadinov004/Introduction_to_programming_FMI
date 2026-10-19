#include <iostream>

int main()
{
	unsigned num;
	std::cin >> num;
	
	bool isPrime = true;
	for (unsigned i = 2; i <= num / i; i++) { // i <= num / i <----> i * i <= num <----> i <= sqrt(num)
		if (num % i == 0) {
			isPrime = false;
			break;
		}
	}
	std::cout << (isPrime ? "prime" : "not prime");
}
