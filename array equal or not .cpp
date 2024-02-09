#include <iostream>

bool areArraysEqual(int arr1[], int arr2[], int size1, int size2) {
    // If sizes of arrays are not equal, they can't be equal
    if (size1 != size2)
        return false;

    // Check element-wise equality
    for (int i = 0; i < size1; ++i) {
        if (arr1[i] != arr2[i])
            return false;
    }

    // If all elements are equal, arrays are equal
    return true;
}

int main() {
    int size1, size2;

    std::cout << "Enter the size of first array: ";
    std::cin >> size1;

    int arr1[size1];
    std::cout << "Enter elements of first array: ";
    for (int i = 0; i < size1; ++i)
        std::cin >> arr1[i];

    std::cout << "Enter the size of second array: ";
    std::cin >> size2;

    int arr2[size2];
    std::cout << "Enter elements of second array: ";
    for (int i = 0; i < size2; ++i)
        std::cin >> arr2[i];

    // Check if arrays are equal
    if (areArraysEqual(arr1, arr2, size1, size2))
        std::cout << "Arrays are equal.\n";
    else
        std::cout << "Arrays are not equal.\n";

    return 0;
}
