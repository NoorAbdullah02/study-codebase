/*Question 1: Create an abstract class Vehicle with a pure virtual function move(). 
Derive a class Car that overrides move().*/
#include <iostream>
using namespace std;
class Vehicle {
public:
    virtual void move() = 0; // Pure virtual function
};
class Car : public Vehicle {
public:
    void move() override {
        cout << "Car is moving" << endl;
    }
};
int main() {
    Car car;
    car.move();
    return 0;
}

