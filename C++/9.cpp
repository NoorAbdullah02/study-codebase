#include<iostream>
using namespace std;
class imu
{
    public:
    int id ;
    float cgpa;
    void imu1()
    {
        cin>>id>>cgpa;
        cout<<id<<endl<<cgpa;
    }

};
int main (){
    imu s1;
    s1.imu1();




return 0;
}

