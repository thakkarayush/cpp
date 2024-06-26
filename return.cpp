#include <iostream>
using namespace std;

int SUM(int a, int b) {
    int s1 = a + b;
    return s1;
}

int main() {
    int num1 = 10, num2 = 10;
    int sum_of = SUM(num1, num2);
    cout << "The sum is " << sum_of;
    return 0;
}
