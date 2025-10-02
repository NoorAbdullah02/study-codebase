//20. Write a C program to input the number the days from the user and convert it into years, months and days.
#include<iostream>
using namespace std;
int main ()
{
 int d;
 cout<<"Enter Days"<<endl;
 cin>>d;
 int y = d/365;
 d = d%365;
 int m = d/30;
 int date = d%30;
 cout<<y<<" "<<"Days"<<" "<<m<<" "<<"Months"<<" "<<date<<" "<<"Days"<<endl;
return 0;
}