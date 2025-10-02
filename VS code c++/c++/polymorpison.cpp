#include<iostream>
using namespace std;

class Base  {
    protected:
    int id;
    public:
   void Fet(int id){
      this->id = id;
    }
  void display(){
        cout<<"Base is "<<" "<<id<<endl;
    }
};
class Derived : public Base {
    int x;
    public:
    void get(int x){
        this -> x = x;
    }
    void display(){
        cout<<"Derived Class Is Called"<<" "<<x<<endl;
    }
};
int main ()
{
    Base *Base1;
    Base obj;
    //Derived *Deri;
    Derived dvi;
    // Base1 = &obj;
    // Base1 -> Fet(10);
    // Base1->  display();
    Base1 = &dvi;
    //obj.Fet(10);
    // dvi.get(100);
    Base1->display();
   // dvi.display();
 
    return 0;
}