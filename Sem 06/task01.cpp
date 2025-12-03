#include <iostream>

const unsigned MAX_ROWS = 10;

void divideRow(double row[], double divideValue, unsigned cols) {
    for (unsigned i = 0; i < cols; i++) {
        row[i] /= divideValue;
    }
}

void subtract(double row[], double original[], double multiplier, unsigned cols) {
    for (unsigned i = 0; i < cols; i++) {
        row[i] -= original[i] * multiplier;
    }
}

void setZeroesInCol(double matrix[][MAX_ROWS + 1], unsigned currentRow, unsigned rows, unsigned cols) {
    for (unsigned i = 0; i < rows; i++) {
        if (i == currentRow) {
            continue;
        }

        subtract(matrix[i], matrix[currentRow], matrix[i][currentRow], cols);
    }
}

void solveSystem(double matrix[][MAX_ROWS + 1], unsigned rows) {
    unsigned cols = rows + 1;

    for (unsigned i = 0; i < rows; i++) {
        divideRow(matrix[i], matrix[i][i], cols);
        setZeroesInCol(matrix, i, rows, cols);
    }
}

int main()
{
    double matrix[MAX_ROWS][MAX_ROWS + 1];

    unsigned rows;
    std::cin >> rows;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows + 1; j++) {
            std::cin >> matrix[i][j];
        }
    }

    solveSystem(matrix, rows);

    for (int i = 0; i < rows; i++) {
        std::cout << matrix[i][rows] << " ";
    }
}
