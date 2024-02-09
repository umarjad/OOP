#include <iostream>

const int MAX_SIZE = 100;

void rotateMatrix(int matrix[][MAX_SIZE], int size) {
    // Define a temporary matrix to store the rotated elements
    int temp[MAX_SIZE][MAX_SIZE];

    // Rotate each element of the matrix
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            // Calculate the new position after rotation
            int newRow = j;
            int newCol = size - 1 - i;
            // Copy the element to the temporary matrix
            temp[newRow][newCol] = matrix[i][j];
        }
    }

    // Copy the rotated elements back to the original matrix
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            matrix[i][j] = temp[i][j];
        }
    }
}

void printMatrix(int matrix[][MAX_SIZE], int size) {
    // Output the elements of the matrix
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int size;

    std::cout << "Enter the size of the square matrix: ";
    std::cin >> size;

    // Input elements of the matrix
    std::cout << "Enter elements of the matrix:" << std::endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    // Rotate the matrix
    rotateMatrix(matrix, size);

    // Output the rotated matrix
    std::cout << "Rotated matrix:" << std::endl;
    printMatrix(matrix, size);

    return 0;
}
