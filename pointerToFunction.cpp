#include <iostream>
using namespace std;

void modifyValue(int* ptr) {
    *ptr = 42; // Modify the value pointed to by 'ptr'
}

int main() {
    int num = 10;
    modifyValue(&num); // Pass the address of 'num'
    cout << "Modified value: " << num << endl; // 42
    return 0;
}
