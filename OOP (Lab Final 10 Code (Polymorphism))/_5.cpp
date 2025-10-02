/*Question 5: Write a program with a virtual function display() in a base class 
and override it in the derived class.*/
#include <iostream>
using namespace std;
class Base {
public:
    virtual void display() {
        cout << "Hello ICE" << endl;
    }
};
class Derived : public Base {
public:
    void display(){
        cout << "Hello ICE 14th" << endl;
    }
};
int main() {
    Base *ptr;
    Derived obj;
    ptr = &obj;
    ptr->display();
    return 0;
}
