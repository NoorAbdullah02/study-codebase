#include <iostream>
using namespace std;
class name
{
    int a, b;

public:
    name(void);
    name(int x, int y)
    {
        a = x;
        b = y;
    }
    void imu()
    {
        cout << a << " " << b << endl;
    }
};
name ::name()
{
    a = 10, b = 20;
}
int main()
{
    name n1;
    n1.imu();
    name n2 = name(10, 12);  //This called Explicit Call
    n2.imu();

    return 0;
}