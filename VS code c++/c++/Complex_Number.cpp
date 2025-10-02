#include<iostream>
using namespace std;
class A{
    int a,b;
    public:
    void set(int a,int b){
        this-> a = a;
        this-> b = b; 
    }
    void complex(A ob1 , A ob2){
        a = ob1.a+ob2.a;
        b = ob1.b+ob2.b;
    }
    void display(){
        cout<<"Complex Number is "<<" "<<a<<"+"<<b<<"i"<<endl;
    }
};
int main ()
{
 A ob1,ob2,ob3;
 ob1.set(4,3);
 ob2.set(5,4);
 ob3.complex(ob1,ob2);
 ob3.display();

return 0;
}