#include <iostream>
using namespace std;

enum class Color {
    RED,
    GREEN,
    BLUE
};

int main() {
    Color myColor = Color::GREEN;
    cout << "Selected color: " << static_cast<int>(myColor) << endl; // Outputs 1 (GREEN)
    return 0;
}
