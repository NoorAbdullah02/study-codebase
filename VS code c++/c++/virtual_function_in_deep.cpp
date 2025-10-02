#include<iostream>
using namespace std;
class Base{
    protected:
string name;
int id;
public:
 Base(){}
 Base(string s,int n){
    name = s;
    id = n;
}
 virtual void display()=0;
 
};
class Base1 : public Base{
    protected:
    float cgpa;
    public:
    Base1(){}
     Base1(string name,int id,float c) : Base (name,id)
{
    cgpa = c;
}
void display(){
    cout<<"Name is"<<" "<<name<<endl;
    cout<<"id is "<<" "<<id<<endl;
    cout<<"CGPA is "<<" "<<cgpa<<endl;
}
};
class Derived : public Base1{
    int mark;
    public:
   Derived (int mark){
               this->mark = mark;
   }
    void display(){
        cout<<"MARK is "<<" "<<mark<<endl;
    }

};
int main ()
{
 Base *ptr[2];
 //Base obj("Abdullah",10);
 Base1 b1("Abdullah",10,38.2);
 Derived dvi(3.45);
//  ptr = &b1;
//  ptr->display();
//  ptr = &dvi;
//  ptr->display();
ptr[1] = &b1;
ptr[2] = &dvi;
ptr[1]->display();
ptr[2]->display(); 


return 0;
}