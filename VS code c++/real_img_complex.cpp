#include <iostream>
using namespace std;
class A
{
    int a;
    int b;

public:
    void set(int x = 10, int y = 2)
    {
        a = x;
        b = y;
    }
    void get()
    {
        cout << a << endl
             << b;
    }
};
int main()
{
    A a;
    a.set();
    a.get();
    return 0;
}  