#include<iostream>
using namespace std;
class imu1
{
    public:
    int age ;
    float s;

void imu ()
{
    cout<<age<<endl<<s;
}
void imu2()
{
    cin>>age>>s;
}
};
int main ()
{
    imu1 s1;
    s1.imu2();
    s1.imu();
    return 0;

}
