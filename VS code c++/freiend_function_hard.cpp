#include <iostream>
using namespace std;
class B;
class A
{
    int x;
    friend void swap(A &, B &);

public:
    void set(int a)
    {
        x = a;
    }
    void get()
    {
        cout << "X is" << " " << x << endl;
    }
};
class B
{
    int y;
    friend void swap(A &, B &);

public:
    void set1(int b)
    {
        y = b;
    }
    void get1()
    {
        cout << "Y is" << " " << y << endl;
    }
};
void swap(A &a1, B &b2)
{
    int temp = a1.x;
    a1.x = b2.y;
    b2.y = temp;
}
int main()
{
    A a1;
    a1.set(37);
    B b1;
    b1.set1(30);
    swap(a1, b1);
    a1.get();
    b1.get1();
    return 0;
}