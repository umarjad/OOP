#include <iostream>
#include <cstring> // For strcmp function

int main() {
    char str1[100];
    char str2[100];

    // Input first string
    std::cout << "Enter first string: ";
    std::cin.getline(str1, 100);

    // Input second string
    std::cout << "Enter second string: ";
    std::cin.getline(str2, 100);

    // Compare strings using strcmp function
    int result = strcmp(str1, str2);

    // Check the result of comparison
    if (result == 0) {
        std::cout << "The strings are equal." << std::endl;
    } else if (result < 0) {
        std::cout << "The first string is lexicographically smaller than the second string." << std::endl;
    } else {
        std::cout << "The first string is lexicographically greater than the second string." << std::endl;
    }

    return 0;
}
