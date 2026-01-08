#include <iostream>

const unsigned TEAM_PLAYERS_COUNT_ELEMENT_INDEX = 0;
const unsigned TEAM_TOTAL_POINTS_ELEMENT_INDEX = 1;

void printRow(const int* row, unsigned size) {
    for (unsigned i = 0; i < size; i++) {
        std::cout << row[i + 2] << " ";
    }
    std::cout << std::endl;
}
void printMatrix(const int* const* matrix, unsigned rows) {
    for (unsigned i = 0; i < rows; i++) {
        printRow(matrix[i], matrix[i][TEAM_PLAYERS_COUNT_ELEMENT_INDEX]);
    }
}

void reorder(int** matrix, unsigned teamIndex) {
    int* key = matrix[teamIndex];
    int j = teamIndex - 1;
    while (j >= 0 && matrix[j][1] < key[1]) {
        matrix[j + 1] = matrix[j];
        j--;
    }
    matrix[j + 1] = key;
}

void addPoints(int** matrix, unsigned teamIndex, unsigned playerIndex,
    unsigned points) {

    matrix[teamIndex][playerIndex + 2] += points;
    matrix[teamIndex][TEAM_TOTAL_POINTS_ELEMENT_INDEX] += points;
    reorder(matrix, teamIndex);
}

void freeMemory(int** matrix, unsigned teamsCount) {
    for (unsigned i = 0; i < teamsCount; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

int main()
{
    unsigned teamsCount;
    std::cin >> teamsCount;

    int** matrix = new int* [teamsCount];
    for (unsigned i = 0; i < teamsCount; i++) {
        unsigned playersCount;
        std::cin >> playersCount;

        matrix[i] = new int[playersCount + 2] {0};
        matrix[i][0] = playersCount;
    }

    printMatrix(matrix, teamsCount);

    int teamIndex, playerIndex, points;
    std::cin >> teamIndex >> playerIndex >> points;

    while (teamIndex != -1) {
        addPoints(matrix, teamIndex, playerIndex, points);
        printMatrix(matrix, teamsCount);
        std::cin >> teamIndex >> playerIndex >> points;
    }
    freeMemory(matrix, teamsCount);
}