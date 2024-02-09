#include <iostream>

int main() {
    int rows;

    std::cout << "Enter the number of rows for the pyramid: ";
    std::cin >> rows;

    // Outer loop for number of rows
    for (int i = 1; i <= rows; ++i) {
        // Inner loop for printing spaces
        for (int j = 1; j <= rows - i; ++j) {
            std::cout << " ";
        }

        // Inner loop for printing stars
        for (int k = 1; k <= 2 * i - 1; ++k) {
            std::cout << "*";
        }

        std::cout << std::endl;
    }

    return 0;
}
