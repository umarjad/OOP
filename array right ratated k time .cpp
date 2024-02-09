#include <iostream>

void rightRotate(int arr[], int size, int k) {
    // Normalize k if it's greater than array size
    k = k % size;

    // Reverse the whole array
    for (int i = 0, j = size - 1; i < j; ++i, --j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // Reverse the first k elements
    for (int i = 0, j = k - 1; i < j; ++i, --j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // Reverse the remaining elements
    for (int i = k, j = size - 1; i < j; ++i, --j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int size, k;

    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int arr[size];

    std::cout << "Enter elements of the array: ";
    for (int i = 0; i < size; ++i)
        std::cin >> arr[i];

    std::cout << "Enter the number of right rotations: ";
    std::cin >> k;

    rightRotate(arr, size, k);

    std::cout << "Array after " << k << " right rotations: ";
    printArray(arr, size);

    return 0;
}
