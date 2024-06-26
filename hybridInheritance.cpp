#include <iostream>
using namespace std;

class Vehicle {
public:
    void start() {
        cout << "Vehicle started." << endl;
    }
};

class Engine {
public:
    void ignite() {
        cout << "Engine ignited." << endl;
    }
};

class Car : public Vehicle, public Engine {
public:
    void drive() {
        cout << "Car is driving." << endl;
    }
};

class ElectricCar : public Car {
public:
    void charge() {
        cout << "Electric car charging." << endl;
    }
};

int main() {
    ElectricCar myElectricCar;
    myElectricCar.start();
    myElectricCar.ignite();
    myElectricCar.drive();
    myElectricCar.charge();
    return 0;
}
