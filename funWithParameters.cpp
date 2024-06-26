#include <iostream>
using namespace std;

// Function to display a number
void displayNum(int n1, float n2) {
    cout << "The int number is " << n1 << endl;
    cout << "The double number is " << n2 << endl;
}

int main() {
    int num1 = 5;
    double num2 = 5.5;
    // Calling the function with arguments
    displayNum(num1, num2);
    return 0;
}
