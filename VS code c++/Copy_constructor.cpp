#include <iostream>
using namespace std;
int count=0;
class A
{
    int a;
    float b;

public:
    A(){};
    A(int x, int y)
    {
        a = x;
        b = y;
       // cout<<endl<<count<<endl;
    }
    A(A &c)
    {
        cout << "Copy Constructor is called" << endl;

        a = c.a;
        b = c.b;
        cout<<endl<<count<<endl;

    }
    void print()
    {
        cout << a << " " << b << endl;
    }
    ~A(){
        cout<<"Distructor is called"<<" "<<count<<endl;
        count++;
    }
};
int main()
{
    A a;
    a = A(20, 30);
    a.print();
    A b = a ;   //Implicit 
    //b = a;   //Explicit
    b.print();

    return 0;
}