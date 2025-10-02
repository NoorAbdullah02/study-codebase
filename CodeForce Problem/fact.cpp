#include<iostream>
#include<vector>
using namespace std;
int main ()
{
int a;
cin>>a;
string s = to_string(a);
if((s.find('7') != string :: npos))cout<<"Yes"<<endl;
else cout<<"No"<<endl;
return 0;
}