#include<iostream>
using namespace std;
class Base{
    int n;
    
    public:
    int n1;
    void get1(int n,int n1){
     this-> n = n;
     this-> n1 = n1;
    }
    int setdata();
};
int Base :: setdata(){
    return n;
}
class Derived : private Base {
  int n2;
  int sum;
  public:
 void get(int n2){
    this-> n2 = n2;
 }
  void display(){
    get1(5,10);
    sum = n2 + n1 + setdata();
    cout<<sum<<endl;
  }
};
int main ()
{
    //Base b(10,20);
    Derived dvi;
    dvi.get(20);
    dvi.display();
     
    return 0;
}