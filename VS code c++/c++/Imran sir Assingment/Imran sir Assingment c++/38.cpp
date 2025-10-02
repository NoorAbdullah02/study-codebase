//C++ program to compare two strings using strcmp !! Cpp program to compare two strings using strcmp
#include<iostream>
#include<cstring>
using namespace std;
int main ()
{
 char n[20],n1[20];
 cin>>n>>n1;
 if (strcmp(n,n1) == 0) 
 cout<<"These Are Equal"<<endl;
 else 
 cout<<"Not Equal"<<endl;
return 0;
}