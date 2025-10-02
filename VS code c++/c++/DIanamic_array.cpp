#include<iostream>
using namespace std;
class Base{
    protected:
    int id;
    public:
    Base(){}
    void get(int i){
          id = i;
    }
    void display(){
        cout<<"Id is "<<" "<<id;
    }
};
int main ()
{
    int d;
 Base *ptr = new Base [2];
 Base *ptr_temp = ptr;
 for (int i=0;i<2;i++){
    cout<<"Enter id for student"<<" "<<i+1<<endl;   
    cin>>d;
    ptr->get(d);
    ptr++;
 }
 for (int i = 0;i<2;i++){
    ptr_temp->display();
    ptr_temp++;
 }
return 0;
}