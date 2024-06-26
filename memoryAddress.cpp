#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int* p = &x; // 'p' holds the address of 'x'
    cout << "Memory address of x: " << p << endl;
    return 0;
}
