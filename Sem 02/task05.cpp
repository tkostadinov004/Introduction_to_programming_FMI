#include <iostream>

const double PI = 3.14;
int main()
{
    char figure;
    std::cin >> figure;

	double area = -1;
	switch (figure)
	{
		case 's': {
			unsigned side;
			std::cin >> side;

			area = side * side;
		}
		break;
		case 't': {
			unsigned side, altitude;
			std::cin >> side >> altitude;

			area = (side * altitude) / 2.0; // 2.0!!!!!
		}
		break;
		case 'c': {
			unsigned radius;
			std::cin >> radius;

			area = PI * radius * radius;
		}
		break;
		case 'r': {
			unsigned sideA, sideB;
			std::cin >> sideA >> sideB;

			area = sideA * sideB;
		}
		break;
		default:
			std::cout << "Invalid figure type!";
	}

	if (area > -1) {
		std::cout << area;
	}
}