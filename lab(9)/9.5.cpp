#include <iostream>
using namespace std;

class Vehicle {
public:

    virtual void drive() {
        cout << "Driving a vehicle." << endl;
    }
};


class Car : public Vehicle {
public:
    void drive() override {
        cout << "Repairing a car." << endl;
    }
};

int main() {
    Vehicle vehicle;
    cout << "Using the Vehicle:" << endl;
    vehicle.drive();

    cout << endl;

    Car car;
    cout << "Using the Car:" << endl;
    car.drive();

    return 0;
}
