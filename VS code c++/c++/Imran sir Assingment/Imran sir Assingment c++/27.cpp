/*4. Write a C program to read the age of a candidate and determine whether he is 
eligible to cast his/her own vote.*/
#include<iostream>
using namespace std;
int main ()
{
 int age;
 cout<<"Enter Your Age : ";
 cin>>age;
 if(age<18){
    cout<<"He is Not Eligible for Vote"<<endl;
 }
 else{
    cout<<"He is Eligible for Vote"<<endl;
 }
return 0;
}