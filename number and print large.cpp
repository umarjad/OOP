#include <iostream>
#include <string>

// Function to print each digit of the number in large size
void printLargeNumber(int num) {
    const std::string largeDigits[10][5] = {
        {
            "  ***  ",
            " *   * ",
            "*     *",
            "*     *",
            "*     *",
            " *   * ",
            "  ***  "
        },
        {
            " * ",
            "** ",
            " * ",
            " * ",
            "***"
        },
        {
            " *** ",
            "*   *",
            "   * ",
            "  *  ",
            "*****"
        },
        {
            " *** ",
            "*   *",
            "   * ",
            "*   *",
            " *** "
        },
        {
            "*   *",
            "*   *",
            "*****",
            "    *",
            "    *"
        },
        {
            "*****",
            "*    ",
            "**** ",
            "    *",
            "**** "
        },
        {
            " *** ",
            "*    ",
            "**** ",
            "*   *",
            " *** "
        },
        {
            "*****",
            "    *",
            "   * ",
            "  *  ",
            " *   "
        },
        {
            " *** ",
            "*   *",
            " *** ",
            "*   *",
            " *** "
        },
        {
            " *** ",
            "*   *",
            " ****",
            "    *",
            " *** "
        }
    };

    std::string numberString = std::to_string(num);

    // Print each row of the large size number
    for (int row = 0; row < 5; ++row) {
        for (char digit : numberString) {
            int index = digit - '0';
            std::cout << largeDigits[index][row] << "  ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    // Print the number in large size
    printLargeNumber(number);

    return 0;
}
