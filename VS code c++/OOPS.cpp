#include <iostream>
using namespace std;
class student{
    public:
    string name;
    int age;
    student () : name(""),age(){}//Default Constructor

     student(string name1,int age1){
        name=name1;
        age=age1;
    }
    void imu(){
        cout<<"Enter Input"<<endl;
        cin>>name>>age;
        cout<<name<<" "<<age<<endl;
    }
    void imu(string name1,int age1){
        
        name=name1;
        age=age1;
    }
      void imu1(){
        cout<<endl<<name<<" "<<age<<endl;
    }
    student (student& r){
        name = r.name;
        age = r.age;

    } 
    ~student(){
        cout<<endl<<"Destructor is called"<<endl;
    }
   

};
int main(){
student s1;
s1.imu();
student *s2 = new student();
s2->name = "Adiba";
s2->age = 17;
cout<<s2->name<<" "<<s2->age;
student s3("Noor",19);
s3.imu1();
student s4=s3;
cout<<s4.name<<" "<<s4.age;

    return 0;

}
