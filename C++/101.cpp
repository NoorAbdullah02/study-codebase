
#include<iostream>
using namespace std;
class Person {
    string name;
    int id;
    public:
    Person(string n,int i){
        name = n;
        id = i;
    }
    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"id : "<<id<<endl;
    }
};
class Student : public Person {
 string dep;
 public:
 Student (string n,int i,string d):Person(n,i){
   dep = d;
 }
 void StudentInfo(){
    cout<<"Student Information is :"<<endl;
    display();
    cout<<"Depertment Name is : "<<dep<<endl<<endl;
 }
};
class Teacher : public Person{
   string dep;
   public:
   Teacher(string n,int i,string d):Person(n,i){
    dep = d;
   }
   void TeacherInfo(){
    cout<<"Teacher Information is :"<<endl;
    display();
   cout<<"Depertment Name is : "<<dep<<endl;
   }
};
int main ()
{
 Student *s = new Student("Noor",10,"ICE");
 s->StudentInfo();
 Teacher *t = new Teacher("Humaira",37,"ENGLISH");
 t->TeacherInfo();
return 0;
}
