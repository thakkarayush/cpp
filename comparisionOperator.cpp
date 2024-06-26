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

    // Comparisons
    cout << "\nComparison Results:" << endl;
    cout << num1 << " == " << num2 << " : " << (num1 == num2) << endl;
    cout << num1 << " != " << num2 << " : " << (num1 != num2) << endl;
    cout << num1 << " > " << num2 << " : " << (num1 > num2) << endl;
    cout << num1 << " < " << num2 << " : " << (num1 < num2) << endl;
    cout << num1 << " >= " << num2 << " : " << (num1 >= num2) << endl;
    cout << num1 << " <= " << num2 << " : " << (num1 <= num2) << endl;

    return 0;
}
