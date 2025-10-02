#include<iostream>
using namespace std;
class Base{
    public:
   virtual void imu() = 0;//pure virtual class is also called Virtual class
};
class Child : public Base{
    public:
    void imu(){
        cout<<"derived is Called"<<endl;
    }
};
class Grand_child : public Base{
    public:
    void imu(){
    cout<<"Grand Child Class is called"<<endl;
    }
};
int main()
{
    Base *b = new Child();
    b->imu();
    b = new Grand_child();
    b -> imu();
    return 0;
}