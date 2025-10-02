#include<iostream>
using namespace std;
class A{
    int id;
    int age;
    public:
    A(){};
    A(int id ,int age){
        this-> id = id;
        this->age = age;
    }
    // A (A &ob1){
    //     cout<<"copy Constructor is called"<<endl;
    //     id = ob1.id;
    //     age = ob1.age;
    // }
    void display(){
        cout<<id<<" "<<age<<endl;
    }
    ~A(){
        cout<<"distructor is Called"<<endl;
    }
};
int main ()
{
    A a1,a(10,18);
    a.display();
     a1 = a; 
    a1.display();
 
return 0;
}