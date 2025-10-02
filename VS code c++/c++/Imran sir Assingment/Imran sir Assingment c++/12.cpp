//12. Write a C Program to interchange values of two numbers using third variable.
#include<iostream>
using namespace std;
int main ()
{
 int a,b;
 cout<<"Enter A"<<endl;
 cin>>a;
 cout<<"Enter B"<<endl;
 cin>>b;
 cout<<"Before Swaping"<<endl;
 cout<<"A = "<<a<<" "<<"B = "<<b<<endl;
 int temp = a;
 a = b;
 b = temp;
cout<<"After Swaping"<<endl;
 cout<<"A = "<<a<<" "<<"B = "<<b<<endl;

return 0;
}