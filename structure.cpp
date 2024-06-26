#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int age;
    double gpa;
};

int main() {
    Student alice;
    alice.name = "Alice Johnson";
    alice.age = 20;
    alice.gpa = 3.8;

    cout << "Student 1 Information:\n";
    cout << "Name: " << alice.name << "\n";
    cout << "Age: " << alice.age << " years\n";
    cout << "GPA: " << alice.gpa << "\n";

    Student john;
    john.name = "John Johnson";
    john.age = 22;
    john.gpa = 3.9;

    cout << "Student 2 Information:\n";
    cout << "Name: " << john.name << "\n";
    cout << "Age: " << john.age << " years\n";
    cout << "GPA: " << john.gpa << "\n";

    return 0;
}
