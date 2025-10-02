#include<iostream>
using namespace std;
class Student {
    protected:
    int id;
    public:
    void get(int id){
     this->id = id;
    }
};
class Test : virtual public Student {
protected:
float math;
float bangla;
public:
void set(float m,float b){
    math = m;
    bangla = b;
}
};
class Sports : virtual public Student{
    protected:
    float sport;
    public:
    void set1(float s){
       sport = s;
    }
};
class Result :  public Sports , public Test{
    float total,parsentage;
    public:
    void display(){
        total = math + bangla + sport;
        parsentage = (total/3);
        cout<<"id is "<<" "<<id<<endl;
        cout<<"Total Mark is"<<" "<<total<<endl;
        cout<<"Parsentage is"<<" "<<parsentage<<endl;
    }
};
int main ()
{
 Result r;
 r.get(10);
 r.set(90.25,56.25);
 r.set1(50.23);
 r.display();
return 0;
}