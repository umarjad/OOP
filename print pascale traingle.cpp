#include <iostream>

// Function to calculate and print Pascal's triangle
void printPascalsTriangle(int numRows) {
    for (int i = 0; i < numRows; ++i) {
        int num = 1; // Initialize first element of each row

        // Print spaces to align the triangle
        for (int j = 0; j < numRows - i; ++j) {
            std::cout << " ";
        }

        // Print elements of the current row
        for (int j = 0; j <= i; ++j) {
            std::cout << num << " ";
            // Calculate next element of the row using the previous element
            num = num * (i - j) / (j + 1);
        }

        std::cout << std::endl; // Move to the next row
    }
}

int main() {
    int numRows;

    std::cout << "Enter the number of rows for Pascal's triangle: ";
    std::cin >> numRows;

    printPascalsTriangle(numRows);

    return 0;
}
