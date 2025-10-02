#include <iostream>
using namespace std;
class Base
{
    int id;

public:
    int age;
    void set();
    int get();
    int get1();
};
void Base ::set()
{
    id = 15;
    age = 20;
}
int Base ::get()
{
    return id;
}
int Base ::get1()
{
    return age;
}
class Derived : private Base
{
    int data;

public:
    void multi()
    {
        set();
        data = get() * age;
    }
    void print()
    {
        multi();
        cout << "Value of data of Base Private is" << " " << get() << endl;
        cout << data << endl;
    }
};

int main()
{
    Derived dvi;
    // dvi.set();
    //  dvi.multi();
    dvi.print();

    return 0;
}