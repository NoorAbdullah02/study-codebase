#include<iostream>
using namespace std;
class yasmin
{
    public:
    void imu (int x,int y)

    {
        cout<<x+y<<endl;
    }
    void imu(int x,int y,int z)
    {
        cout<<x+y+z<<endl;
    }
    void imu(){
    cout<<"I hate BAUET"<<endl;
    }

};
class imran : public yasmin{
public:


};

int main ()
{
    imran s1;
    yasmin *p;
    p=&s1;
    p->imu();
   return 0;

}
