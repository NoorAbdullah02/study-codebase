//C++ Program to reverse a string enter by user
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main ()
{
string name;
cin>>name;
reverse(name.begin(),name.end());
cout<<name<<endl;
    return 0;
}
