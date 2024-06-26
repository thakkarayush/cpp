#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5}; // Initialize an array
    cout << "The elements are: ";
    for (int i : arr) {
        cout << i << " ";
    }
    return 0;
}
