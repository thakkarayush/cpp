#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Read from the text file
    ifstream MyReadFile("filename.txt");

    // Use a while loop to read line by line
    string myText;
    while (getline(MyReadFile, myText)) {
        cout << myText; // Output the text from the file
    }

    // Close the file
    MyReadFile.close();
    return 0;
}
