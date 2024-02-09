#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor to initialize length and width
    Rectangle(double l, double w) : length(l), width(w) {}

    // Member function to set length
    void setLength(double l) {
        length = l;
    }

    // Member function to set width
    void setWidth(double w) {
        width = w;
    }

    // Member function to calculate and return area
    double calculateArea() {
        return length * width;
    }

    // Member function to calculate and return perimeter
    double calculatePerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    // Creating a Rectangle object with initial length and width
    Rectangle myRectangle(5.0, 3.0);

    // Displaying initial values
    std::cout << "Initial Rectangle:" << std::endl;
    std::cout << "Area: " << myRectangle.calculateArea() << std::endl;
    std::cout << "Perimeter: " << myRectangle.calculatePerimeter() << std::endl;

    // Modifying length and width
    myRectangle.setLength(7.0);
    myRectangle.setWidth(4.0);

    // Displaying updated values
    std::cout << "\nUpdated Rectangle:" << std::endl;
    std::cout << "Area: " << myRectangle.calculateArea() << std::endl;
    std::cout << "Perimeter: " << myRectangle.calculatePerimeter() << std::endl;

    return 0;
}
