// 22. Write a C Program to input three digits number from user and display square of first and last numbers
#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
 int num;
 cout<<"Enter Number"<<endl;
 cin>>num;
 int st1N = num/100;
 int lastN = num%10;
 int sq = pow(st1N,2);
 int sq1 = pow(lastN,2);
 cout<<"Squre of "<<" "<<st1N<<" "<<"is"<<" "<<sq<<endl;  
  cout<<"Squre of "<<" "<<lastN<<" "<<"is"<<" "<<sq1<<endl;  

return 0;
}