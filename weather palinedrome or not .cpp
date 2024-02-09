#include <iostream>

bool isPalindrome(int number) {
    int originalNumber = number;
    int reverseNumber = 0;

    // Reverse the number
    while (number > 0) {
        int digit = number % 10;
        reverseNumber = reverseNumber * 10 + digit;
        number /= 10;
    }

    // Check if the original number is equal to its reverse
    return originalNumber == reverseNumber;
}

int main() {
    int num;

    // Input
    std::cout << "Enter a number: ";
    std::cin >> num;

    // Check if the number is a palindrome
    if (isPalindrome(num)) {
        std::cout << num << " is a palindrome." << std::endl;
    } else {
        std::cout << num << " is not a palindrome." << std::endl;
    }

    return 0;
}
