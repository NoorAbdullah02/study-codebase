#include<iostream>
using namespace std;
class Base{
    public:
    void say(){
        cout<<"hello"<<endl;
    }
};
class Base1{
    public:
    void say(){
        cout<<"Hi"<<endl;
    }
};
class print :  public Base,public Base1 {
    public:
    void say(){
        Base1::say();
    }
};
int main ()
{
    print p;
    p.say();
    return 0;
} 