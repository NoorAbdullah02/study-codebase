//Write C++ program to count the number of alphabets, digits and special characters in string
#include<iostream>
using namespace std;
int main ()
{
 string name;
 cin>>name;
 int alpha = 0,digit = 0, S_C = 0;
 for (int i=0;i<name.size();i++){
    if ((name[i] >= 'A' && name[i] <='Z') || (name[i] >='a' && name[i] <='z'))
    alpha++;
    else if (name[i] >='0' && name[i] <='9')
    digit++;
    else 
    S_C++;
 }
 cout<<"Alphabates Are : "<<alpha<<endl;
 cout<<"Digits Are : "<<digit<<endl;
 cout<<"Special Character Are : "<<S_C<<endl;
return 0;
}