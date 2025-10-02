#include<iostream>
using namespace std;
class Base{
    int id = 10;
    public:
    void display(){
        cout<<"Base Class is Called"<< " "<<id<<endl;
    }
};
class Derived : public Base{
    int x = 20;
    public:
    void display(){
        cout<<"Derived Class is called"<< " "<<x<<endl;
    }
};

int main ()
{
    Base *Base1;
    Base obj1;
    Derived obj2;
    Base1 = &obj2;
    Base1->display();
 
return 0;
}