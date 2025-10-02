#include<iostream>
using namespace std;
class imu
{
private:
    string str;
public:
    void imu1(string x)
    {
        str=x;
    }
    string imu2(){
    return str;

    }

};
int main ()
{
    imu s1;
    s1.imu1("Imran");
    cout<<s1.imu2();

    return 0;

}
