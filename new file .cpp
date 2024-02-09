#include <iostream>
#include <fstream> // For file operations

int main() {
    std::ofstream file; // Create an object of ofstream class

    // Open a new file named "example.txt"
    file.open("example.txt");

    // Check if the file is successfully created
    if (!file.is_open()) {
        std::cerr << "Error: Unable to create the file." << std::endl;
        return 1; // Return 1 to indicate failure
    }

    // Write some content to the file
    file << "This is a new file created using C++ program.";

    // Close the file
    file.close();

    std::cout << "File created successfully." << std::endl;

    return 0;
}
