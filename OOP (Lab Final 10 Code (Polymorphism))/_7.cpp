/*Question 7:Write a C++ program to Create a base class Shape with a virtual function area(). 
Then, create two derived classes, Rectangle and Circle, which override the area() function. The Rectangle class 
should calculate the area as length * width, and the Circle class should calculate the area as 
π * radius * radius.*/
#include <iostream>
#include <cmath>
using namespace std;
class Shape {
public:
    virtual double area() {}
};
class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double area() override {
        return length * width;
    }
};
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() override {
        return M_PI * radius * radius;
    }
};
int main() {
    Shape* shape1 = new Rectangle(5.0, 3.0);
    Shape* shape2 = new Circle(2.0);

    cout << "Rectangle area: " << shape1->area() << endl;
    cout << "Circle area: " << shape2->area() << endl;
    return 0;
}
