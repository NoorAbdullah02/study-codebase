//C++ program to calculate the total marks, percentage and division of student 
#include<iostream>
#include<cstring>
using namespace std;
int main ()
{
    string name,div;
    cout<<"Enter Name : ";
    cin>>name;
    int roll;
    cout<<"Enter Roll Number :"<<" ";
    cin>>roll;
 float B,E,M;
 cout<<"Enter Bangla English & Math Marks"<<endl;
 cin>>B>>E>>M;
 float total_mark = B+E+M;
 float parsentage = (total_mark/3);
 if 
 (parsentage<60) div = "Fail";
 else if 
 (parsentage<=69 && parsentage >=60) div = "Third Class";
 else if 
 (parsentage >=70 && parsentage <=79) div = "Second Class";
 else if 
 (parsentage >=80 && parsentage <=100) div = "First Class";
 cout<<"Student Name is "<<" "<<name<<endl<<"Roll is "<<roll<<endl; 
 cout<<"Total Mark is "<<total_mark<<endl<<"Parsentage is "<<" "<<parsentage<<endl;
 cout<<"Division is "<<div<<endl;
return 0;
}
