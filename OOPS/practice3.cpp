//Write a class for Employee Derived Classes
/*1. Fulltime Employee with Salary
2. Part time Employee with Daily Wages
Write required Methods*/
#include<iostream>
using namespace std;
class base{
    string name;
    int id;

    public:
    base(string n,int i){
        name = n;
        id = i;
    }
    string Nget(){
        return name;
    }
    int Iget(){
        return id;
    }
};
class FullTimeEmploy : base{
int salary;
    public:
FullTimeEmploy(string n,int i,int s):base(n,i){
     salary = s;
}
void print (){
    cout<<"Full Time Employ Name is : "<<Nget()<<endl;
    cout<<"ID is : "<<Iget()<<endl;
    cout<<"Salary is : "<<salary<<endl;
}
};
class Part_time_Employ : base{
    int wages;
    public:
    Part_time_Employ(string n,int i,int w): base(n,i){
    wages = w;
    }
    void print(){
    cout<<"Part Time Employ Name is : "<<Nget()<<endl;
    cout<<"ID is : "<<Iget()<<endl;;
    cout<<"Salary is : "<<wages<<endl;
    }
};
int main()
{
  FullTimeEmploy *F = new FullTimeEmploy ("Abdullah",10,2500);
  F->print();
  Part_time_Employ *p = new Part_time_Employ("Shawon",06,25);
  p->print();
    return 0;
}