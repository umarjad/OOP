#include <iostream>

int main() {
    char op;
    double num1, num2;

    // Input
    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> op;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    // Perform calculation based on operator
    switch (op) {
        case '+':
            std::cout << "Result: " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << "Result: " << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << "Result: " << num1 * num2 << std::endl;
            break;
        case '/':
            if (num2 != 0)
                std::cout << "Result: " << num1 / num2 << std::endl;
            else
                std::cout << "Error! Division by zero is not allowed." << std::endl;
            break;
        default:
            std::cout << "Error! Invalid operator." << std::endl;
    }

    return 0;
}
