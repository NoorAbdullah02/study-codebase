#include<iostream>
#include<string>
using namespace std;
class student
{
    public:
    imu()
    {
        cout<<"Hello how are you"<<endl;
    }
};
class me:public student{
public:
    imu()
    {
        cout<<"ME"<<endl;
    }
};
class teacher: public me
{
public:
    imu()
    {


    cout<<"Teacher"<<endl;
    string i = "Abdullah";
    int l= i.size();
    cout<<l<<endl;
    }
};
int main ()
{
    student s1;
    s1.imu();
    me m;
    m.imu();
    teacher t1;
    t1.imu();
    return 0;

}
