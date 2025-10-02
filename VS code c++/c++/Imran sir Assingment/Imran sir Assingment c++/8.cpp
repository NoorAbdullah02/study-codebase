//8. Write a C Program to convert Km value into meter value.
#include<iostream>
using namespace std;
int main ()
{
 int km;
 cout<<"Enter Kilometer"<<endl;
 cin>>km;
 int m = km*1000;
 cout<<"Kilometer to meter Conversion is :"<<" "<<m<<endl;
return 0;
}