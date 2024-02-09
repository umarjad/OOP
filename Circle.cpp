#include <iostream>
#include <cmath>

class Circle {
private:
    double radius;

public:
    // Constructor
    Circle(double r) : radius(r) {}

    // Getter and setter for radius
    double getRadius() const {
        return radius;
    }

    void setRadius(double r) {
        radius = r;
    }

    // Member function to calculate area
    double calculateArea() const {
        return M_PI * radius * radius;
    }

    // Member function to calculate circumference
    double calculateCircumference() const {
        return 2 * M_PI * radius;
    }
};

int main() {
    // Example usage of the Circle class
    double userRadius;
    
    // Get user input for the radius
    std::cout << "Enter the radius of the circle: ";
    std::cin >> userRadius;

    // Create a Circle object with the user-provided radius
    Circle myCircle(userRadius);

    // Display the calculated area and circumference
    std::cout << "Area of the circle: " << myCircle.calculateArea() << std::endl;
    std::cout << "Circumference of the circle: " << myCircle.calculateCircumference() << std::endl;

    return 0;
}
