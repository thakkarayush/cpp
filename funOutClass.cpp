#include <iostream>
using namespace std;

// Forward declaration of the class
class MyClass;

// Function prototype (declaration)
void displayMyClass(const MyClass& obj);

// Define the class
class MyClass {
public:
    int value;

    // Constructor
    MyClass(int val) : value(val) {}

    // Member function
    void display() const {
        cout << "Value inside MyClass: " << value << endl;
    }
};

// Function definition outside the class
void displayMyClass(const MyClass& obj) {
    cout << "Calling displayMyClass function:" << endl;
    obj.display();
}

int main() {
    MyClass obj(42);
    displayMyClass(obj); // Pass the object as a parameter
    return 0;
}
