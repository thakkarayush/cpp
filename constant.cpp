#include <iostream>
using namespace std;

int main() {
    const int myNum = 15;  // myNum will always be 15
    // myNum = 10;  // error: assignment of read-only variable 
    cout << "Constant = "<<myNum;
  return 0;
}
