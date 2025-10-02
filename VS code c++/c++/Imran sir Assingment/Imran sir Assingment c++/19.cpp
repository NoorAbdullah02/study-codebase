//19. Write a C Program to input any small letter and display it with capital letter.
#include<iostream>
using namespace std;
int main ()
{
 char ch;
 cout<<"Enter A Small Character"<<endl;
 cin>>ch;
 if (ch>=97&&ch<=122){
    char c = ch-32;
    cout<<"Lowercase Character is :"<<" "<<c<<endl; 
 }
 
return 0;
}