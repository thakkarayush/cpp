#include <iostream>
#include <stdexcept>
using namespace std;

int AddPositiveIntegers(int a, int b) {
    if (a < 0 || b < 0)
        throw invalid_argument("AddPositiveIntegers arguments must be positive");
    return (a + b);
}

int main() {
    try {
        int result = AddPositiveIntegers(5, -3); // Throws an exception
        cout << "Result: " << result << endl;
    } catch (const invalid_argument& e) {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}
