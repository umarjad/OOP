#include <iostream>
#include <string>
#include <algorithm> // For reverse function

std::string addBinary(std::string a, std::string b) {
    std::string result = "";
    int carry = 0;
    int i = a.size() - 1;
    int j = b.size() - 1;

    // Traverse both strings from the end
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0)
            sum += a[i--] - '0';
        if (j >= 0)
            sum += b[j--] - '0';

        // Update carry and append the sum to the result
        carry = sum / 2;
        result += std::to_string(sum % 2);
    }

    // Reverse the result string
    std::reverse(result.begin(), result.end());

    return result;
}

int main() {
    std::string binary1, binary2;

    std::cout << "Enter the first binary string: ";
    std::cin >> binary1;

    std::cout << "Enter the second binary string: ";
    std::cin >> binary2;

    std::string sum = addBinary(binary1, binary2);

    std::cout << "Sum of the binary strings: " << sum << std::endl;

    return 0;
}

