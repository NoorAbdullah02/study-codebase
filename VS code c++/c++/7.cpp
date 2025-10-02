#include<iostream>
#include<conio.h>
using namespace std;
class Bauet
{
    public:
int student ;
string location;
double area;
Bauet(){//default Constructor 

    location = "Natore";
student = 100;
area =3.54;
}
Bauet(double a,string l,int s)//parametarized constructor.
{
    area = a;
    location = l;
    student = s;

}  
Bauet(Bauet& b)//copy constructor
{
    location = b.location;
    area = b.area;
    student = b.student;

}
void display()
{
    cout<<location<<" "<<student<<" "<<area;
}
/*void diaplay1(){

    cout<<"Enter Location Area & Student "<<endl;
    cin>>location>>area>>student;
}*/

};
int main()
{
    Bauet s1;
    s1.display();
    cout<<endl;
    /*Bauet s2( 4.45,"Bauet",105);
    s2.display();*/
    Bauet s3=s1;
    s3.display();

    getch ();
}