/*Question 8 : Write a C++ Program to implemrnt How can constructors 
be overloaded to initialize an object in multiple ways?*/
#include <iostream>
using namespace std;
class MyClass {
public:
    MyClass() {
        cout << "Default Constructor" << endl;
    }
    MyClass(int x) {
        cout << "Parameterized Constructor with int: " << x << endl;
    }
    MyClass(double x) {
        cout << "Parameterized Constructor with double: " << x << endl;
    }
};
int main() {
    MyClass obj1;
    MyClass obj2(10);
    MyClass obj3(10.5);
    return 0;
}
