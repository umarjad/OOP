#include <iostream>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int num;

    std::cout << "Enter the number of terms for Fibonacci sequence: ";
    std::cin >> num;

    std::cout << "Fibonacci Sequence: ";
    for (int i = 0; i < num; ++i) {
        std::cout << fibonacci(i) << " ";
    }

    return 0;
}
