#include <iostream>

int main() {
    int num;

    // Input
    std::cout << "Enter an integer: ";
    std::cin >> num;

    // Check if the number is even or odd
    if (num % 2 == 0) {
        std::cout << num << " is an even number." << std::endl;
    } else {
        std::cout << num << " is an odd number." << std::endl;
    }

    return 0;
}
