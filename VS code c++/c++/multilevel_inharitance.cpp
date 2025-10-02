#include <iostream>
using namespace std;
class Student
{
protected:
    string name;
    int id;

public:
    Student(string n, int i)
    {
        name = n;
        id = i;
    }
};
class Exam : public Student{
    protected:
    double Science,Math;
    public:
    Exam(double s, double m,string n,int i):Student(n,i){
          Science = s;
          Math = m;
    }
}; 
class Result : public Exam{
    double total_marks;
    double parsentage;
    public: 
    Result(double s, double m,string n,int i):Exam(s,m,n,i){
          total_marks = (Science+Math);
        parsentage = (total_marks/200)*100;
    }
    
    void display();
};
void Result :: display(){
    cout<<"Student Name is "<<" "<<name<<endl;
    cout<<"Student ID is"<<" "<<id<<endl;
    cout<<"Student Total Mark is" <<" "<<total_marks<<endl;
    cout<<"Student Parsentage is "<<" "<<parsentage<<"%"<<endl;
    }
    
int main()
{
    Result r(98.2,90,"Abdullah",10);;
    r.display();


    return 0;
}