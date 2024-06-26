#include <iostream>
using namespace std;

int main() {
    const int size = 5;
    int arr[size] = {10, 20, 30, 40, 50};

    cout << "Elements of the 1D array:\n";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}
