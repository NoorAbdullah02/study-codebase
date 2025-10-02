//C++ program to check whether a character is alphabet, digit or special character
#include<iostream>
#include<string>
using namespace std;
int main ()
{
 char ch;
 cin>>ch;
 if (ch>='A' || ch<='Z' && ch>='a'&& ch<='z') 
 cout <<ch<<" "<<"is a Alphabet"<<endl;
 else if (ch>='0' && ch<='9') 
 cout <<ch<<" "<<"is a Digit"<<endl;
 else 
 cout<<ch<<" "<<"is a Special Character"<<endl;
 
return 0;
}