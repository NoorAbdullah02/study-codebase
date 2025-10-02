#include<iostream>
using namespace std;
class Student {
    public:
    string name;
    int id;
    int age;
    
    void set_data(){
name = "Abdullah";
id = 10;
age = 18;
}

    void get_data(){
    cout<<name<<" "<<id<<" "<<age;
}

};
    void set_data(Student &s){
    s.name = "Abdullah";
    s.id = 10;
    s.age = 18;
}
void change(Student &s){
    s.name = "Noor";
}
    void get_data(Student s2){
    cout<<s2.name<<" "<<s2.id<<" "<<s2.age;
}
int main ()
{
    Student s1;
    // s1.name = "Abdullah";
    // s1.id = 10;
    set_data(s1);
    change(s1);
    get_data(s1);
    cout<<endl<<"Class is Called"<<endl;
    s1.set_data();
    s1.get_data();
    return 0;
}