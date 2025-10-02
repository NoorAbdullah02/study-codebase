//21. Write a C Program to input three digits number from user and calculate sum of first and last numbers.
#include<iostream>
using namespace std;
int main ()
{
 int num;
 cout<<"Enter Number"<<endl;
 cin>>num;
 int st1N = num/100;
 int lastN = num%10;
 int sum = st1N + lastN;
 cout<<"Sum is :"<<" "<<sum<<endl; 
return 0;
}