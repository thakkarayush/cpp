#include <iostream>  // for std::cout and std::cin
using namespace std;

int main() {
    // Declare variables
    int a, b, c;

    // Input two integers
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    // Initial values
    cout << "\nInitial values:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // Bitwise AND assignment
    c = a;      // Assign value of a to c
    c &= b;     // c = c & b;
    cout << "\nAfter c &= b: " << c << endl;

    // Bitwise OR assignment
    c = a;      // Assign value of a to c
    c |= b;     // c = c | b;
    cout << "After c |= b: " << c << endl;

    // Bitwise XOR assignment
    c = a;      // Assign value of a to c
    c ^= b;     // c = c ^ b;
    cout << "After c ^= b: " << c << endl;

    // Right shift assignment
    c = a;      // Assign value of a to c
    c >>= 2;    // c = c >> 2;
    cout << "After c >>= 2: " << c << endl;

    // Left shift assignment
    c = a;      // Assign value of a to c
    c <<= 2;    // c = c << 2;
    cout << "After c <<= 2: " << c << endl;

    // Arithmetic assignment operators
    c = a;      // Reset c to the value of a
    c += b;     // c = c + b;
    cout << "\nAfter c += b: " << c << endl;

    c = a;      // Reset c to the value of a
    c -= b;     // c = c - b;
    cout << "After c -= b: " << c << endl;

    c = a;      // Reset c to the value of a
    c *= b;     // c = c * b;
    cout << "After c *= b: " << c << endl;

    c = a;      // Reset c to the value of a
    c /= b;     // c = c / b;
    cout << "After c /= b: " << c << endl;

    c = a;      // Reset c to the value of a
    c %= b;     // c = c % b;
    cout << "After c %= b: " << c << endl;

    return 0;
}
