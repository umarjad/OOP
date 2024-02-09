#include <iostream>

int linearSearch(int arr[], int size, int key) {
    // Iterate through the array to find the key
    for (int i = 0; i < size; ++i) {
        if (arr[i] == key)
            return i; // Return the index if key is found
    }
    // Return -1 if key is not found
    return -1;
}

int main() {
    int size, key;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int arr[size];
    std::cout << "Enter elements of the array: ";
    for (int i = 0; i < size; ++i)
        std::cin >> arr[i];

    std::cout << "Enter the element to search: ";
    std::cin >> key;

    int index = linearSearch(arr, size, key);

    if (index != -1)
        std::cout << "Element found at index: " << index << std::endl;
    else
        std::cout << "Element not found in the array." << std::endl;

    return 0;
}

