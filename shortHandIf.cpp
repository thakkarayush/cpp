#include <iostream>
using namespace std;

int main() {
    int number;

    // Asking the user to enter a number
    cout << "Enter a number: ";
    cin >> number;

    // Using the ternary operator to check if the number is positive, negative, or zero
    string result = (number > 0) ? "The number is positive." 
                  : (number < 0) ? "The number is negative." 
                  : "The number is zero.";

    // Output the result
    cout << result << endl;

    return 0;
}
