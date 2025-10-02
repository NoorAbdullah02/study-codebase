/*Question 4: Write a program with a base class Animal and a derived class Dog that overrides the speak() function.*/
#include <iostream>
using namespace std;
class Animal {
public:
    void speak() {
        cout << "Animal sound" << endl;
    }
};
class Dog : public Animal {
public:
    void speak() {
        cout << "Woof Woof" << endl;
    }
};
int main() {
    Dog d;
    d.speak();
    return 0;
}
