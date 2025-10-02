#include<iostream>
using namespace std;
class adi{
    public:
int age ;
int month;
void imu()
{

    cout<<endl;
    cout<<age<<endl<<month;
}
/*void imu1(int x,int y)
{
age=x;
month=y;
}*/
adi(int x, int y)
{
    age=x;
    month=y;
}
};
int main ()
{
    adi s1;
    adi s2(50,30);
    s1.imu1(20,30);
    s1.imu();
    s2.imu();

    return 0;

}
