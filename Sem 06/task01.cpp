#include <iostream>

const unsigned N = 10;

bool isReflexive(const bool matrix[][N], unsigned rows) {
	for (int i = 0; i < rows; i++) {
		if (!matrix[i][i]) {
			return false;
		}
	}
	return true;
}

bool isSymmetric(const bool matrix[][N], unsigned rows) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < rows; j++) {
			if (matrix[i][j] && !matrix[j][i]) {
				return false;
			}
		}
	}
	return true;
}

bool isTransitive(const bool matrix[][N], unsigned rows) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < rows; j++) {
			for (int k = 0; k < rows; k++) {
				if (matrix[i][j] && matrix[j][k] && !matrix[i][k]) {
					return false;
				}
			}
		}
	}
	return true;
}

bool isEquivalence(const bool matrix[][N], unsigned rows) {
	return isReflexive(matrix, rows) &&
		isSymmetric(matrix, rows) &&
		isTransitive(matrix, rows);
}

int main() {
	unsigned rows;
	std::cin >> rows;

	bool matrix[N][N];
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < rows; j++) {
			std::cin >> matrix[i][j];
		}
	}

	std::cout << isEquivalence(matrix, rows);
}
