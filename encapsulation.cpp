#include <iostream>
using namespace std;

class Rectangle {
private:
    int length; // Private data member
    int breadth; // Private data member

public:
    // Parameterized constructor
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    // Public method to calculate area
    int getArea() {
        return length * breadth;
    }
};

int main() {
    // Creating an object of the Rectangle class
    Rectangle rect(5, 3);

    // Accessing the public method to get the area
    int area = rect.getArea();

    cout << "Area of the rectangle: " << area << endl;
    return 0;
}
