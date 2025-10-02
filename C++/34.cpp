#include<iostream>
using namespace std;
class imu
{
public:
    virtual void send_massage()=0;
};
class imu1:public imu
{
  public:
    void send_message(){
    cout<<"2nd is called"<<endl;
    }

};
class imu2:public imu1
{
    void send_message(){
    cout<<"3rd is Called"<<endl;
    }

};
int main ()
{
    imu *p;

    //p->send_message;

    return 0;

}
