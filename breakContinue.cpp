#include <iostream>
using namespace std;

int main() {
    // Break Example
    cout<<"Break"<<endl;
    int i = 0;
    while (i < 10) {
        cout << i << "\n";
        ++i;
        if (i == 4) {
            break;
        }
    }

    // Continue Example
    cout<<"Continue"<<endl;
    i = 0;
    while (i < 10) {
        if (i == 4) {
            ++i;
            continue;
        }
        cout << i << "\n";
        ++i;
    }

}
