#include<iostream>
using namespace std;
class Base{
   protected:
   int a;
   public:
   Base(int a){
    this-> a = a;
    cout<<"Base is Called"<<endl;
   }
};
class Base2{
protected:
int b;
public:
Base2(int b){
    this-> b = b;
    cout<<"Base2 is called"<<endl;
}
};
class Derived : public Base2 , virtual public Base{
int c,d; 
public:
Derived(int x,int y,int z,int k):Base(x),Base2(y){
c=z;
d=k;
cout<<"derived Constructor is called"<<endl;
}
};
int main ()
{
Derived dvi(2,3,5,4);

  
return 0;
}