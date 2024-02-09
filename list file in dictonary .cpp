#include <iostream>
#include <boost/filesystem.hpp>

namespace fs = boost::filesystem;

int main() {
    std::string directoryPath;

    std::cout << "Enter the directory path: ";
    std::cin >> directoryPath;

    // Check if the directory exists
    if (!fs::exists(directoryPath)) {
        std::cerr << "Error: Directory not found." << std::endl;
        return 1; // Return 1 to indicate failure
    }

    // Check if the given path is a directory
    if (!fs::is_directory(directoryPath)) {
        std::cerr << "Error: Not a directory." << std::endl;
        return 1; // Return 1 to indicate failure
    }

    // Iterate over the files in the directory
    for (auto& entry : fs::directory_iterator(directoryPath)) {
        std::cout << entry.path().filename() << std::endl;
    }

    return 0;
}
