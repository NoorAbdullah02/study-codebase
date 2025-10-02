#include<iostream>
using namespace std;
class student{
    public:
    
     string name="Sheikh ";
    
     
};
class student1 :public  student{
    public:
    string name1="Abdullah ";
     
      
     
};
class student2 :public student1{
    public:
    string name="Noor";
  void imu(){
    cout<<name<<endl;
  }
     
};

int main (){
    student2 s2;
    s2.imu();
    


    return 0;

}