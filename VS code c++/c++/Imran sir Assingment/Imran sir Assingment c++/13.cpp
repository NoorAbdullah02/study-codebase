// 13. Write a C Program to interchange values of two numbers without using third variable.

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
 b = a + b;
 a = b - a;
 b = b - a;
cout<<"After Swaping"<<endl;
 cout<<"A = "<<a<<" "<<"B = "<<b<<endl;

return 0;
}