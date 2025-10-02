#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int id;
    Student (){}
    Student (string name,int id){
        this-> name = name ;
        this-> id = id;
    }
};
int main()
{
    Student s1;
    Student *ptr = &s1;
    ptr -> name = "Sheikh";
    (*ptr).id = 10;
    // cout<<ptr-> name;
   cout<<s1.name<<" "<<s1.id<<endl;
    Student *s3 = new Student ("Noor", 18);
   cout<<(*s3).name<<" "<<(*s3).id<<endl;
   Student *s4 = new Student (s1);
      cout<<(*s4).name<<" "<<(*s4).id<<endl;


    return 0;
}