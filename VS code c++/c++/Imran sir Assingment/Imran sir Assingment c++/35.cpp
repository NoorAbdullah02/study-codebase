//C++ program to find the eligibility of admission for an engineering course based on the criteria
#include<iostream>
using namespace std;
int main ()
{
 int age;
 cout<<"Enter Age : ";
 cin>>age;
 if (age<18) 
 cout<<"You Are Not Eligible For Addmission"<<endl;
 else 
 cout<<"Congratulation You Are Eligible For Addmission"<<endl;
return 0;
}