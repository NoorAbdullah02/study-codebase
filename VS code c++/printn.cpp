#include <iostream>
using namespace std;
class A
{
public:
    int id;
    void imu(int a)
    {
        id = a;
    }
};
class B : A
{
public:
    void imu(int a)
    {
        id = a;
    }
    void imu1()
    {
        cout << id;
    }
};
int main()
{
    B b1;
    b1.imu(20);
    b1.imu1();

    return 0;
}
