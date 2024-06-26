#include <iostream>
using namespace std;

int main() {
    int number, sum = 0;

    // Prompting the user to enter a number
    cout << "Enter a positive number (or a negative number to end): ";
    cin >> number;

    // Using a while loop to calculate the sum of entered positive numbers
    while (number >= 0) {
        sum += number; // Add the number to the sum

        // Prompt the user to enter the next number
        cout << "Enter a positive number (or a negative number to end): ";
        cin >> number;
    }

    // Output the sum of all entered positive numbers
    cout << "The sum of all positive numbers entered is: " << sum << endl;

    return 0;
}
