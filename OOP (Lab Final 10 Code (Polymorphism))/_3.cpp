//Question 3: Write a program with a base class and a derived class that overrides a 
//function to display different messages?
#include <iostream>
using namespace std;
class Base {
public:
    void display() {
        cout << "Base class is Called" << endl;
    }
};
class Derived : public Base {
public:
    void display() {
        cout << "Derived class is Called" << endl;
    }
};
int main() {
    Derived obj;
    obj.display();
    return 0;
}
