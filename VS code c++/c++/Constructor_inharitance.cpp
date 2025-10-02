#include <iostream>
using namespace std;
class Bas1
{
    int x;

public:
    Bas1(int a)
    {
        x = a;
    }
    void print1()
    {
        cout << "Id is " << " " << x << endl;
        cout << "Bas1 is called" << endl;
    }
};
class Bas2
{
    int y;

public:
    Bas2(int b)
    {
        y = b;
    }
    void print2()
    { 
        cout << "Age is " << " " << y << endl;
        cout << "Bas2 is called" << endl;
    }
};
class Derived : public Bas1, virtual public Bas2
{
    int g, h;

public:
    //  Derived(){};
    Derived(int a, int b, int x, int y) : Bas1(a), Bas2(b)
    {
        g = x;
        h = y;
    }
    void print()
    {

        cout << g << " " << h << endl;
        cout << "derived Class is called" << endl;
    }
};
int main()
{
    Derived dvi(10, 20, 30, 40);
    dvi.print1();
    dvi.print2();
    dvi.print();

    return 0;
}