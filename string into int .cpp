#include <iostream>
#include <string>

int main() {
    std::string str;
    
    std::cout << "Enter a number as a string: ";
    std::cin >> str;

    try {
        int number = std::stoi(str);
        std::cout << "The integer value is: " << number << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Invalid argument: " << e.what() << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << "Out of range error: " << e.what() << std::endl;
    }

    return 0;
}
