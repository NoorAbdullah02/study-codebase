#include<iostream>
#include<conio.h>
#include<string>
class student{
public:
    int id;
    double cgpa;
    void imu()
    {
        cin>>id>>cgpa;
        cout<<"Id is "id<<"Cgpa is "cgpa;
    }

};

using namespace std;
int main ()
{
    student s1;
    s1.imu();

    getch();
}
