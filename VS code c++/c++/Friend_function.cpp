#include <iostream>
using namespace std;
class A
{

    int a,b;

        public:

    void set(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    friend A Complax_sum(A obj1, A obj2);
    void display();
};
void A ::display()
{
    cout << a << " " << "+" << " " << b << "i" << endl;
}
A Complax_sum(A obj1, A obj2)
{
    A obj3;
    obj3.set((obj1.a + obj2.a), (obj1.b + obj2.b));
    return obj3;
}
int main()
{
    A obj1, obj2, sum;
    obj1.set(4, 6);
    obj2.set(10, 6);
    sum = Complax_sum(obj1, obj2);
    sum.display();

    return 0;
}