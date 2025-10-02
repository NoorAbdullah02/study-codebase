#include<iostream>
using namespace std;
class Student{
private:
string name;
int roll;
public:
int b;
int e;
int m;
Student(string name , int roll,int b,int e,int m);
float get(){
    float avg = (b+e+m)/3.0;
    return avg;
}
int get1();
};
Student :: Student(string name,int roll,int b,int e,int m){
    this -> name = name;
    this -> roll = roll;
    this -> b = b;
    this ->  e = e;
    this -> m = m;
}
int Student :: get1(){
    return roll;
}
int main (){
    string name;
    int id;
    int b,e,m;
    cin>>name>>id>>b>>e>>m;
    Student *s1 = new Student(name,id,b,e,m);
    cout<<"Roll Number is : "<<s1->get1()<<endl;
    if (s1->get()<60) cout<<"Fail"<<endl;
    else if (s1->get()<70 && s1->get()>=61) cout<<"3rd Division"<<endl;
    else if (s1->get()<80 && s1->get()>=71) cout<<"2nd Division"<<endl;
    else{
        cout<<"1st Division"<<endl;
    }
    return 0;
}