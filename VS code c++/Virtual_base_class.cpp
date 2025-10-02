#include<iostream>
using namespace std;
class student {
    protected:
    string name;
    int roll_num;
    public:
    void set(string x,int r){
        name = x;
        roll_num  = r;
    }
    void get(){
        cout<<"Student name is "<<name<<endl;
        cout<<"Student Roll Number is "<<roll_num<<endl;

    }
};
class test : virtual public student {
    protected:
    int ICT;
    int MATH;
    public:
    void set(int i,int m){
        ICT = i;
        MATH = m;
    }
    void get(){
        cout<<"ICT Mark is "<<ICT<<endl;
        cout<<"MATH Mark is "<<MATH<<endl;
    }
};
class sport: public virtual student {
 protected :
 int sports;
 public:
 void set(int s){
    sports = s;
 }
 void get(){
    cout<<"Sports Mark is "<<sports<<endl;
 }
};
class Result : public test , public sport {
protected:
int total;
int parsentage;
public:
void display(){
    total = MATH + ICT + sports;
    parsentage = total / 3 ;
    student :: get();
    test :: get();
    sport :: get();
    cout<<"Total Mark is "<<total<<endl;
    cout<<"Parsentage is "<<parsentage<<'%'<<endl;

}
}; 
int main (){

Result r1;
r1.student :: set("Noor",10);
r1.test :: set(50,71);
r1.sport :: set(82);
r1.display();
    return 0;
}