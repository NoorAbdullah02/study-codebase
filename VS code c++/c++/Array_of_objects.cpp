#include<iostream>
using namespace std;
class A{
    int id;
    public:
      void set (){
        cin>>id;
      }
      void display(){
        cout<<id<<" ";
      }
};
int main ()
{
 A a[3];
 for (int i=0;i<3;i++){
    a[i].set();
    a[i].display();
 }
return 0;
}