// 14. Write a C program to input two numbers and print their quotient and remainder.

#include<iostream>
using namespace std;
int main ()
{
 float devident,devisor;
 cout<<"Enter Devident :"<<endl;
 cin>>devident;
cout<<"Enter Devisor :"<<endl;
 cin>>devisor; 
 int Quotient = devident / devisor;
 int Rem = (int)devident / (int)devisor;
 cout<<"Quotient is :"<<" "<<Quotient<<endl;
 cout<<"Reminder is :"<<" "<<Rem<<endl;

return 0;
}