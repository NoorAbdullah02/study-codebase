//C++ program to check alphabets using conditional operator !! Cpp programming questions
#include<iostream>
using namespace std;
int main ()
{
 char ch;
 cin>>ch;
 if (ch>='A' && ch<='Z' || ch>='a' && ch<='z') 
 cout<<ch <<" "<<"is an Alphabet"<<endl;
 else 
 cout<<ch<<" "<<"not an alphabet"<<endl;
return 0;
}