#include <iostream>
using namespace std;

int main() {
    int var = 20;
    int* ptr; // Declare a pointer variable
    ptr = &var; // Assign the address of 'var' to 'ptr'

    cout << "Value at ptr: " << ptr << endl; // Address
    cout << "Value at var: " << var << endl; // 20
    cout << "Value at *ptr: " << *ptr << endl; // 20 (dereferencing)

    return 0;
}
