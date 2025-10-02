//Write C++ program to create calculator using switch Statement
#include<iostream>
using namespace std;
int main ()
{
    int a,b;
    char ch;
    cout<<"Enter Operation"<<endl;
    cin>>a>>ch>>b;
    switch(ch){
   case '+': {
    cout<<"Addition is : "<<a+b<<endl;
    break;
   }
   case '-': {
    cout<<"Subtraction is : "<<a-b<<endl;
    break;
   }
   case '*': {
    cout<<"Multiplication is : "<<a*b<<endl;
    break;
   }
   case '/': {
    cout<<"Division is : "<<(float)a/(float)b<<endl;
    break;
   }
   default:{
    cout<<"Envalid Number"<<endl;
   }
    }
 
return 0;
}