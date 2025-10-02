// 23. Write a C Program to input two digits number from user and display with reverse number on screen 
#include<iostream>
using namespace std;
int main ()
{
 int num,rev = 0,rem = 0;
 cout<<"Enter A Number :"<<endl;
 cin>>num;
while(num!=0){
    rem = num%10;
    rev = rev*10+rem;
    num = num/10;
}
cout<<"Reverse Number is :"<<" "<<rev<<endl;
return 0;
}