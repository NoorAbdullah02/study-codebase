//Write C++ program to check whether a number is Armstrong number or not
#include<iostream>
using namespace std;
int main ()
{
 int num,rem = 0,sum = 0;
 cin>>num;
 int n = num;
 while(num!=0){
rem = num%10;
sum += (rem*rem*rem);
num /= 10;
 }
 if (sum == n)
 cout<<"This Number is a Armstrong Number"<<endl;
 else
 cout<<"This Number is Not a Armstrong Number"<<endl;
return 0;

}