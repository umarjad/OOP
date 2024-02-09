#include <iostream>

// Function to convert decimal to octal
int decimalToOctal(int decimalNumber) {
    int octalNumber = 0;
    int placeValue = 1;

    // Convert decimal number to octal digit by digit
    while (decimalNumber != 0) {
        octalNumber += (decimalNumber % 8) * placeValue;
        decimalNumber /= 8;
        placeValue *= 10;
    }

    return octalNumber;
}

int main() {
    int decimalNumber;

    std::cout << "Enter a decimal number: ";
    std::cin >> decimalNumber;

    int octalNumber = decimalToOctal(decimalNumber);

    std::cout << "Octal equivalent: " << octalNumber << std::endl;

    return 0;
}
