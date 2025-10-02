#include <iostream>
using namespace std;
class Animal {
public:
   virtual void sound() { 
        cout << "Some sound" << endl;
    }
};
class Dog : public Animal {
public:
    void sound(){ 
        cout << "Bark" << endl;
    }
};
class Cat : public Animal {
public:
    void sound()  { 
        cout << "Meow" << endl;
    }
};
int main() {
    Dog dog;
    Cat cat;
    dog.sound();
    cat.sound();
    Animal *a = new Dog;
    a->sound();

    return 0;
}