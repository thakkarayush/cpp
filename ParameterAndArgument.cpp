#include <iostream>
using namespace std;

// Function with parameters
void multiply(int a, int b) {
    cout << "Product: " << a * b << endl;
}

int main() {
    int x = 5, y = 3;
    multiply(x, y); // 'x' and 'y' are the arguments
    return 0;
}
