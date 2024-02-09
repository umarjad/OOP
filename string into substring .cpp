#include <iostream>
#include <string>
#include <vector>
#include <sstream>

std::vector<std::string> splitString(const std::string& str, char delimiter) {
    std::vector<std::string> substrings;
    std::stringstream ss(str);
    std::string token;

    // Split the string using the delimiter
    while (std::getline(ss, token, delimiter)) {
        substrings.push_back(token);
    }

    return substrings;
}

int main() {
    std::string inputString;
    char delimiter;

    // Input the string and delimiter
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    std::cout << "Enter the delimiter character: ";
    std::cin >> delimiter;
    std::cin.ignore(); // Ignore the newline character in the input buffer

    // Split the string into substrings
    std::vector<std::string> substrings = splitString(inputString, delimiter);

    // Output the substrings
    std::cout << "Substrings:" << std::endl;
    for (const std::string& substring : substrings) {
        std::cout << substring << std::endl;
    }

    return 0;
}

