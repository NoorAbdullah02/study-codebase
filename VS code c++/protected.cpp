#include<iostream>
using namespace std;
class A{
  protected :
  int a;
  public:
  void imu(int x){
    a = x;
  }
  void print(){
    cout<<a;
  }
};
class B : protected A{

};
int main (){
 A a;
 a.imu(10);
 a.print();
B b;


   return 0;

}