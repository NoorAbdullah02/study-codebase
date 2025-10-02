#include<iostream>
using namespace std;
class Base{
   protected:
   int id;
   public:
   void get(int id){
    this-> id = id;
   }
   void display(){
    cout<<id<<endl;
   }
};
int main ()
{
    Base *ptr = new Base[4];
    Base *ptr_temp = ptr;
    // ptr->display();
    for (int i=0;i<2;i++){
        cout<<" Enter ID"<<endl;
        int n;
        cin>>n;
        ptr->get(n);
        ptr++;
    }
    for (int i=0;i<2;i++){
        ptr_temp->display();
        ptr_temp++;
    }

 
return 0;
} 