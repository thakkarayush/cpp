#include <iostream>  // for std::cout and std::cin
using namespace std;

int main() {
    // Declare variables
    int num1, num2;

    // Input two integers
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Logical AND
    if (num1 > 0 && num2 > 0) {
        cout << "Both numbers are positive." << endl;
    } else {
        cout << "At least one number is not positive." << endl;
    }

    // Logical OR
    if (num1 == 0 || num2 == 0) {
        cout << "At least one number is zero." << endl;
    } else {
        cout << "Neither number is zero." << endl;
    }

    // Logical NOT
    bool flag = true;
    if (!flag) {
        cout << "The flag is false." << endl;
    } else {
        cout << "The flag is true." << endl;
    }

    return 0;
}
