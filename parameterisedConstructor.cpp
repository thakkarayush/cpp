#include <iostream>
#include <string.h>
using namespace std;

class Student {
    int rollNo;
    char name[50];
    double fee;

public:
    // Parameterized constructor
    Student(int r, const char* n, double f) {
        rollNo = r;
        strcpy(name, n);
        fee = f;
    }

    void display() {
        cout << endl << rollNo << "\t" << name << "\t" << fee;
    }
};

int main() {
    // Creating an object with specific values
    Student s1(121, "Geivan", 5000);
    s1.display();
    return 0;
}
