//C++ program to convert a string to a lower case !! Cpp program to convert a string to a lower case
#include<iostream>
#include<cstring>
using namespace std;
int main ()
{
 string name;
 cin>>name;
 for (int i=0;i<name.size();i++){
    name[i] = tolower(name[i]);
 }
 cout<<name;

return 0;
}