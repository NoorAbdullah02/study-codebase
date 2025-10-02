#include<iostream>
using namespace std;
class Rem{
    int num;
    int num1;
    public :
    Rem (int num,int num1){
        this -> num = num;
        this -> num1 = num1;
    }
    int rem(){
        return num%num1;
    }
    int quo(){
        return num/num1;
    } 
};
int main ()
{
    int n,n1;
    cout<<"Enter Two Number"<<endl;
    cin>>n>>n1;
    Rem *r = new Rem (n,n1);
    cout<<"Remender is : "<<r->rem()<<endl;
    cout<<"Quotient is : "<<r->quo()<<endl;

 
return 0;
}