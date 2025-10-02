//C++ Program to Find Quotient and Remainder using class and object.
#include<iostream>
using namespace std;
class Quotient{
    public:
    int num,num1;
    Quotient(int n,int n1){
        num = n;
        num1 = n1;
    }
    void get(){
        int rem = num % num1;
        int quo = num / num1;
        cout<<"Reminder is : "<<rem<<endl<<"Quotient is : "<<quo<<endl;
    }
};
int main ()
{
    int a,b;
    cout<<"Enter Two Numbers"<<endl;
    cin>>a>>b;
    Quotient q(a,b);
    q.get();
 
return 0;
}