#include <iostream>

bool isPrime(int number) {
    // Corner cases
    if (number <= 1)
        return false;
    if (number <= 3)
        return true;

    // Check for divisibility from 2 to square root of the number
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0)
            return false;
    }

    return true;
}

int main() {
    int num;

    // Input
    std::cout << "Enter a number: ";
    std::cin >> num;

    // Check if the number is prime
    if (isPrime(num)) {
        std::cout << num << " is a prime number." << std::endl;
    } else {
        std::cout << num << " is not a prime number." << std::endl;
    }

    return 0;
}
