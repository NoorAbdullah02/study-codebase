//Write a C++ program to calculate compound Interest 
#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
 float p,r,t;
 cout<<"Enter Principle Amount : ";
 cin>>p;
 cout<<"Enter Rate of Interest : ";
 cin>>r;
 cout<<"Enter Time - Period : ";
 cin>>t;
 int  CI = p* (pow((1+r/100),t) -1) ;
 cout<<"Compound Interest is :"<<CI<<endl;
return 0;
}