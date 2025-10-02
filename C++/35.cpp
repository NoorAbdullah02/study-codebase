#include<iostream>
using namespace std;
class A{
private:
    int id=10;
    string s= "Imran";
public:
    friend class B;
};
class B
{
public:
    void imu(A ob)
    {
        cout<<ob.id<<endl;
        cout<<ob.s<<endl;
    }
};

int main ()
{
    A a;
    B b;
    b.imu(a);


    return 0;

}
