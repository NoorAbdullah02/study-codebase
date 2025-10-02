#include<iostream>
#include<cmath>
#include<string>
using namespace std;
using ll = long long int;
int main ()
{
 string s;
 cin>>s;
 if (s.size() == 1)s.insert(0,"000");
 else if (s.size() == 2)s.insert(0,"00");
 else if (s.size() == 3)s.insert(0,"0");
 cout<<s<<endl;
return 0;
}