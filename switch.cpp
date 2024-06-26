#include <iostream>
using namespace std;

int main() {
    int choice;

    // Displaying a menu to the user
    cout << "Menu:" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    // Using the switch statement to handle different choices
    switch (choice) {
        case 1:
            cout << "You chose to add." << endl;
            // Add operation code here
            break;
        case 2:
            cout << "You chose to subtract." << endl;
            // Subtract operation code here
            break;
        case 3:
            cout << "You chose to multiply." << endl;
            // Multiply operation code here
            break;
        case 4:
            cout << "You chose to divide." << endl;
            // Divide operation code here
            break;
        default:
            cout << "Invalid choice. Please select a number between 1 and 4." << endl;
            break;
    }

    return 0;
}
