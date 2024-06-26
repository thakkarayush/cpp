#include <iostream>
using namespace std;

class Reptile {
public:
    void crawl() {
        cout << "Reptile is crawling." << endl;
    }
};

class Snake : public Reptile {
public:
    void hiss() {
        cout << "Snake is hissing." << endl;
    }
};

class Python : public Snake {
public:
    void squeeze() {
        cout << "Python is squeezing." << endl;
    }
};

int main() {
    Python myPython;
    myPython.crawl();
    myPython.hiss();
    myPython.squeeze();
    return 0;
}
