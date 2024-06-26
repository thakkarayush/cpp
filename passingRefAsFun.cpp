#include <iostream>
using namespace std;

void swap(int& first, int& second) {
    int temp = first;
    first = second;
    second = temp;
}

int main() {
    int a = 2, b = 3;
    swap(a, b); // Swaps the values of 'a' and 'b'
    cout << a << " " << b; // Output: 3 2
    return 0;
}
