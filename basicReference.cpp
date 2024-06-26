#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int& ref = x; // 'ref' is a reference to 'x'

    ref = 20; // Value of 'x' is now changed to 20
    cout << "x = " << x << '\n'; // Output: x = 20

    x = 30; // Value of 'x' is now changed to 30
    cout << "ref = " << ref << '\n'; // Output: ref = 30

    return 0;
}
