#include<iostream>
using namespace std;
int main ()
{
 string s;
 getline(cin,s);
 int l = s.size();
 size_t found = s.find('\\');
 cout<<s.substr(0,found);
 
return 0;
}