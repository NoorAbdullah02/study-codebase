#include<iostream>
using namespace std;
class B;
class A{
    int num;
    friend void imu(A& ,B&);
    public:
    void set(int num){
        this->num = num;
    }
    void display(){
   cout<<num<<endl; 
}
};
class B{
int num;
 friend void imu(A& ,B&);
public:
void set(int num)
{
  this->  num = num;
}
void display(){
   cout<<num<<endl; 
}
};
void imu( A &obj1 , B &obj2){
  int temp = obj1.num;
  obj1.num = obj2.num;
  obj2.num = temp;
}
int main ()
{
    A a;
    a.set(5);
    B b;
    b.set(10);
    imu(a,b);
    a.display();
    b.display();
    return 0;
}