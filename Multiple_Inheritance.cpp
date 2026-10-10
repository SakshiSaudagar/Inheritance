#include <iostream>
using namespace std;

class Car {
public:
    void carFeature() {
        cout << "Car has 4 wheels." << endl;
    }
};

class Bike {
public:
    void bikeFeature() {
        cout << "Bike has 2 wheels." << endl;
    }
};

class Vehicle : public Car, public Bike {
public:
    void vehicleFeature() {
        cout << "Vehicle can be used for transportation." << endl;
    }
};

int main() {
    Vehicle v;
    
    v.carFeature();
    v.bikeFeature();
    v.vehicleFeature();

    return 0;
}