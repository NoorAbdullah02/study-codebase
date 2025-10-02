#include<iostream>
using namespace std;
class A{
    private:
    int a ;
    int b;
    public:
    A(int a ,int b = 20){
        this -> a = a;
        this -> b = b; 
    }
    A (int a){
        this-> a = a;
        b=2;
    }
    A(){
        a = 10;
        b = 20;
    }
   void  display(){
        cout<<a<<" "<<"+"<<" "<<b<< " "<<"i"<<endl;
    }
    };
int main ()
{
 A a,a1,a2;
 a.display();
a1.display();


return 0;
}