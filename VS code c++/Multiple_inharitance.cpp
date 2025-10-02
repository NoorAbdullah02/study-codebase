#include<iostream>
#include<string> 
using namespace std;
class Base{
    protected:
    string name;
    public:
    void set(string name1){
        name = name1; 
    }
};
class Base2{
protected:
    string name2;
    public:
    void set1(string name3){
        name2 = name3;
    }
};
class derived : public Base , public Base2{
    public:
   void display(){
    cout<<"Base Class is = "<<name<<endl;
        cout<<"Base2 Class is = "<<name2<<endl;
        cout<<"Concatinate name is "<<name+name2<<endl;

   }
};
int main (){

derived d;
d.set("Abdullah");
d.set1("Adiba");
d.display();

    return 0;

}