#include <iostream>

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1, num2;

    std::cout << "Enter value for num1: ";
    std::cin >> num1;

    std::cout << "Enter value for num2: ";
    std::cin >> num2;

    std::cout << "Before swapping:\n";
    std::cout << "num1 = " << num1 << ", num2 = " << num2 << std::endl;

    swap(num1, num2);

    std::cout << "After swapping:\n";
    std::cout << "num1 = " << num1 << ", num2 = " << num2 << std::endl;

    return 0;
}
