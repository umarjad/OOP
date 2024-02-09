#include <iostream>

bool isLeapYear(int year) {
    // Leap year is divisible by 4
    // But if the year is also divisible by 100, it is not a leap year unless it is also divisible by 400
    return (year % 4 == 0) && (year % 100 != 0 || year % 400 == 0);
}

int main() {
    int year;

    // Input
    std::cout << "Enter a year: ";
    std::cin >> year;

    // Check if the year is a leap year
    if (isLeapYear(year)) {
        std::cout << year << " is a leap year." << std::endl;
    } else {
        std::cout << year << " is not a leap year." << std::endl;
    }

    return 0;
}
