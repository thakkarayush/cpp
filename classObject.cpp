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
    // Create two objects of the Rectangle class
    Rectangle rect1;
    Rectangle rect2;

    // Set properties for rect1
    rect1.length = 5.0;
    rect1.width = 3.0;

    // Set properties for rect2
    rect2.length = 7.0;
    rect2.width = 4.0;

    // Calculate and display areas
    cout << "Area of rect1: " << rect1.calculateArea() << endl;
    cout << "Area of rect2: " << rect2.calculateArea() << endl;

    return 0;
}
