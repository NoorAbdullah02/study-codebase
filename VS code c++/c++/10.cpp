#include<iostream>
#include<conio.h>
using namespace std;
class student 
{
    public:

int id ;
string name;

student ()
{
    cout<<"Default Constructor is called"<<endl;

}
student (int x,string n)
{

    id = x;
    name = n;
    cout<<"Parametarized Constructor is called"<<endl;
}


student (student & s)
{
    name = s.name;
    id = s.id;
    cout<<"Copy Constructor is Called"<<endl;
} 
void display (){
    cout<<"ID is = "<<id<<endl<<"Name is = "<<name<<endl;
}
void display1()
{
    cout<<"Enter ID and Name "<<endl;
    cin>>id>>name;
}
};

int main ()
{ 
    student s2(10,"Sheikh");
    s2.display();

    student s1;
    s1.display1();
    s1.display();
   
   student s3=s1 ;
   s3.display();

    getch ();


}