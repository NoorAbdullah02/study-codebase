#include<iostream>
#include<conio.h>
using namespace std;
class student 
{
private:
int id ;
float cgpa;
string name ;
public:
void get(int x,float y,string z)
{
    id=x;
    cgpa=y;
    name=z;
}
int set()
{
    return id;
   
}
float set1()
{
    return cgpa;
   
}
string set2()
{
    return name;
   
}
void display()
{
    cin>>id>>cgpa>>name;
    cout<<"Id is "<<" "<<id<<"CGPA is "<<" "<<cgpa<<"Name is "<<" "<<name<<endl;
}

};
int main ()
{
  student s1;
  s1.display();
    getch ();
} 