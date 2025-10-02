/*3.Write a C++ program to implement a class called Student that has public member variables for name, class, 
roll number, and marks. Include member functions to calculate the grade based on the marks and display the 
student's information using inheritance.*/
#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int id;
    Student(string name,int id){
     this -> name = name;
     this -> id = id;
    }
};
class grade : public Student{
    public:
    float bangla,english,math,avg;
    grade(string n,int i,float bangla,float english,float math) : Student(n,i){
     this -> bangla = bangla;
     this -> english = english;
     this -> math = math;
    };
    void display(){
        cout<<"Total Mark is : "<<(int)(bangla+english+math)<<endl;
        avg = (bangla+english+math)/3.0;
        cout<<"Average Mark is : "<<avg<<endl;
        if (avg<40)cout<<"Grade is F"<<endl;
        else if (avg >= 40 && avg <50){
            cout<<"Grade is D"<<endl;
        }
        else if (avg >= 50 && avg <60){
            cout<<"Grade is C"<<endl;
        }
        else if (avg >= 60 && avg < 70){
            cout<<"Grade is B"<<endl;
        }
        else if (avg >= 70 && avg <80){
            cout<<"Grade is A"<<endl;
        }
        else if (avg >= 80 && avg <100){
            cout<<"Grade is A+"<<endl;
        }
    }
};
int main ()
{
 string n;
 int r;
 float b,e,m;
 cout<<"Enter Student Name : ";
 getline(cin,n);
 cout<<"Enter Student Roll Number : ";
 cin>>r;
 cout<<"Enter Student Bangla Subject Mark : ";
 cin>>b;
 cout<<"Enter Student English Subject Mark : ";
 cin>>e;
 cout<<"Enter Student Math Subject Mark : ";
 cin>>m;
 grade *g = new grade(n,r,b,e,m);
 g->display();
return 0;
}