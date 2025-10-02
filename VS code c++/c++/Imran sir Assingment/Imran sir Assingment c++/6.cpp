//6. Write a C program that will take three numbers from user and find there average.
#include<iostream>
using namespace std;
int main ()
{
 int a,b,c;
 cout<<"Enter Three Numbers"<<endl;
cin>>a>>b>>c;
 int Avg = (a+b+c)/3;
 cout<<"Average is :"<<" "<<Avg<<endl;
return 0;
}