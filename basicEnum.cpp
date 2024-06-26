#include <iostream>
using namespace std;

enum Level {
    LOW,
    MEDIUM,
    HIGH
};

int main() {
    enum Level myVar = MEDIUM;
    cout << "Value of myVar: " << myVar << endl; // Outputs 1 (MEDIUM)
    return 0;
}
