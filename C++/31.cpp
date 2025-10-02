#include<iostream>
#include<string>
using namespace std;
class person
{
    public:
    int id ;
    float gpa;
   void imu()
   {
       cin>>  id >> gpa ;
       cout<<"Id is "<<id<<endl<<"Gpa is = "<<gpa<<endl;
   }
};
class student : public person
{
public:
    imu1(){
    cout<<"Enter Age ID And  "<<endl;

    imu();
    }
};
int main ()
{
    student s1;
    //s1.name="Abdullah";
    s1.imu1();
    return 0;

}
