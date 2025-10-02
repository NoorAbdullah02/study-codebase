#include<iostream>
using namespace std;
class x {
    string n;
    public:
    void set(string n){
        this -> n = n;
    }
    string getX(){return n;}
};
class Y {
    string n;
    public:
    void set1(string n){
     this -> n = n;
    }
    string getY(){return n;}
};
class Concatinate : public x,public Y{
    public:
    void display(){
        cout<<"Concatinate Name is : "<<getX() + getY();
    }
};
int main ()
{
    x a;
    Y b;
    a.set("Sheikh Noor Abdullah ");
    b.set1("(Imran)");
    Concatinate c;
    c.set(a.getX());
    c.set1(b.getY());
    c.display();

 
return 0;
}