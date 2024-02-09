#include <iostream>

void findMaxMin(int arr[], int size, int &max, int &min) {
    // Initialize max and min with the first element of the array
    max = arr[0];
    min = arr[0];

    // Iterate through the array to find maximum and minimum elements
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max)
            max = arr[i];
        else if (arr[i] < min)
            min = arr[i];
    }
}

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int arr[size];
    std::cout << "Enter elements of the array: ";
    for (int i = 0; i < size; ++i)
        std::cin >> arr[i];

    int max, min;
    findMaxMin(arr, size, max, min);

    std::cout << "Maximum element in the array: " << max << std::endl;
    std::cout << "Minimum element in the array: " << min << std::endl;

    return 0;
}
