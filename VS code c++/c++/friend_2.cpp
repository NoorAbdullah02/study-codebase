#include<iostream>
using namespace std;
class B;
class A{
   int x; 
   friend class B; 
   public:
   void get(int a)  {
     x = a;
   } 
//    void display(){
//     cout<<x<<endl;
//    }
};
class B{
    int c ;
    public:
    void set1(int c){
        this-> c = c;
    }
    
    void set(A obj1 , B obj2 ){
        cout<< obj1.x + obj2.c;
    } 
};
int main ()
{
 A a;
 a.get(2);
 B b;
 b.set1(5);
b.set(a,b);
return 0;
}