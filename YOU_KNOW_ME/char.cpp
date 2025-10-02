#include<iostream>
using namespace std;
int main ()
{
 char x;
 cin>>x;
 char c;
  if (x>=65 && x<=90)c = x + 32;
 else if(x>=97 && x<=122)c = x - 32;
 cout<<c<<endl;
return 0;
}