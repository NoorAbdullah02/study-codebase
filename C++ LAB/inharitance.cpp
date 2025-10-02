#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int age ;
    void get(){
        cout<<"Student Name is : "<<name<<endl;
        cout<<"Student Age is : "<<age<<endl;
    }
};
class Human : public Student {
   public:
   int id;
   void print(){
    cout<<"Id is : "<<id<<endl;
    get();
   }
};
int main ()
{
Human h1;
h1.name = "Abdullah";
h1.age = 15;
h1.id = 10;
h1.print();
return 0;
}