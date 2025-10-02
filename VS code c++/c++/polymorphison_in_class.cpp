#include<iostream>
using namespace std;
class A{
    public:
    int num;
   virtual void display(){
        cout<<"A is Called"<<endl;
        cout<<num<<endl;
    }
};
class B : public A{
   public:
   int a=1,b=2;
   void display(){
   // display();
    cout<<"Class B is Called"<<endl;
    cout<<a<<" "<<b<<endl;
   }
};
int main ()
{
    A *a;
    A obj_a;
    B *b;
    B obj_b;
    a = &obj_b;
    a->num = 20;
    a->display();
    // a->a=10;
    // b = &obj_b;
    // b-> num = 40;
    // b->a = 4;
    // b->b = 20;
    // b->display();

    return 0;
}