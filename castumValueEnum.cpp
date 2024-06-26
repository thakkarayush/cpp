#include <iostream>
using namespace std;

enum Priority {
    LOW = 10,
    MEDIUM = 50,
    HIGH = 100
};

int main() {
    enum Priority myPriority = MEDIUM;
    cout << "Custom value of MEDIUM: " << myPriority << endl; // Outputs 50
    return 0;
}
