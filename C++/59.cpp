// Class Example
#include<iostream>
#include<string>
using namespace std;
class student
{
public:
    int id ;
    double cgpa;
    string s;
    void imu(){
        cout <<"Enter Name ID ANd Cgpa "<<endl;
        cin>>s>>id>>cgpa;
        cout<<"Name is : "<<s<<endl<<"Id is : "<<id<<endl<<"Cgpa is : "<<cgpa;

    }
};
int main ()
{
    student s1;
    s1.imu();

    return 0;

}
