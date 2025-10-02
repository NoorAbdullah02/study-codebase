//Complex number in OOPS in easy way//
#include <iostream>
using namespace std;
class Complex
{
    int real;
    int img;

public:
    void setdata(int a, int b)
    {
        real = a;
        img = b;
    }
    void Setdataby_sum(Complex c1, Complex c2)
    {
        real = c1.real + c2.real;
        img = c1.img + c2.img;
    }
    void print()
    {
        cout << "Complex Number is = " << " " << real << "+" << img << "i" << endl;
    }
    void print1()
    {
        cout << "Normal Number is = " << " " << real << "+" << img << endl;
    }
};
int main()
{
    Complex c1, c2, c3;
    c1.setdata(1, 3);
    c1.print1();

    c2.setdata(2, 6);
    c2.print1();

    c3.Setdataby_sum(c1, c2);
    c3.print();

    return 0;
}