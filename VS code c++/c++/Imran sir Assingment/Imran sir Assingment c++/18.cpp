//18. Write a C Program to input any Capital letter and display it with small letter.
#include<iostream>
using namespace std;
int main ()
{
 char ch;
 cout<<"Enter A Capital Character"<<endl;
 cin>>ch;
 if (ch>=65&&ch<=90){
    char c = ch+32;
    cout<<"Lowercase Character is :"<<" "<<c<<endl; 
 }
return 0;
}