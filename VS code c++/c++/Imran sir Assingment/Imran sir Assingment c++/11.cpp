//11. Write a C Program to find area of a rectangle (Hint: A = l*b)
#include<iostream>
using namespace std;
int main ()
{
 float base,hight;
 cout<<"Enetr Base"<<endl;
 cin>>base;
 cout<<"Enetr Hight"<<endl;
 cin>>hight;
 int AoT = 0.5*base*hight;
 cout<<"Area of a rectangle is :"<<" "<<AoT<<endl;
return 0;
}