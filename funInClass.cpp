#include <iostream>
using namespace std;

// Define a class named 'Rectangle'
class Rectangle {
public:
    double length;
    double width;

    // Member function to calculate area
    double calculateArea() {
        return length * width;
    }
};

int main() {
    // Create an object of the Rectangle class
    Rectangle rect;

    // Set properties for the rectangle
    rect.length = 5.0;
    rect.width = 3.0;

    // Calculate and display the area
    cout << "Area of the rectangle: " << rect.calculateArea() << endl;

    return 0;
}
