#include <iostream>  // for std::cout and std::cin
using namespace std;

int main() {
    // Declare variables
    int num1, num2;
    int sum, difference, product, quotient, remainder;

    // Input two integers
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Perform arithmetic operations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;
    remainder = num1 % num2;

    // Output the results of arithmetic operations
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder << endl;

    // Demonstrate increment and decrement operators
    cout << "\nIncrement and Decrement Operators:" << endl;
    
    // Pre-increment
    cout << "Pre-increment of num1: " << ++num1 << endl;  // Increases num1 by 1 and then prints it
    // Post-increment
    cout << "Post-increment of num1: " << num1++ << endl;  // Prints num1 and then increases it by 1
    cout << "Value of num1 after post-increment: " << num1 << endl;  // Now prints the incremented value

    // Pre-decrement
    cout << "Pre-decrement of num2: " << --num2 << endl;  // Decreases num2 by 1 and then prints it
    // Post-decrement
    cout << "Post-decrement of num2: " << num2-- << endl;  // Prints num2 and then decreases it by 1
    cout << "Value of num2 after post-decrement: " << num2 << endl;  // Now prints the decremented value

    return 0;
}
