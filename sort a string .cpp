#include <iostream>
#include <algorithm> // For std::sort

int main() {
    std::string str;

    // Input a string
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    // Sort the string
    std::sort(str.begin(), str.end());

    // Output the sorted string
    std::cout << "Sorted string: " << str << std::endl;

    return 0;
}
