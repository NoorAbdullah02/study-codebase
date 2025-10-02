// Constructor Example //
#include<iostream>
using namespace std;
class imran
{
    public:
    int id;
    string name;
    double cgpa;
    //Constructor // Constructor need no return type it use the same name of the class name //////
    // This is Parametrized contructor
    imran (int y,string x,double z )
    {
        name = x;
        id=y;
        cgpa=z;
    }
    void imu(){
        cout<<"Name is : "<<name<<endl<<"Id is : "<<id<<endl<<"Cgpa is : "<<cgpa;

    }


};
int main ()
{
    imran s1(10,"Abdullah",3.45);
    s1.imu();
    return 0;
}
