#include<iostream>
using namespace std;

class student
{
    public:
string name ;
int id;
float cgpa;

student ()//default constructor 
{
name = "Abdullah";
id =10;
cgpa =3.45;
}
student (string x,int y,float z )//parametterized constructor
{
    name = x;
    id =y;
    cgpa=z;
    }
    student (student& a )//copy constructor
    {
     name = a.name ;
     id = a.id;
     cgpa = a.cgpa;
    }
void disply()

{
    cout<< name <<" "<<id<<" "<<cgpa;
}
~student()
{
    cout<<endl<<"Ditructor is called";
}

};
int main ()
{
    student s1("Abdullah",20,3.45);
    s1.disply();
    student s2;
    cout<<endl;
    s2.disply();
    cout<<endl;
    student s3=s2;
    s3.disply();


    return 0;

}