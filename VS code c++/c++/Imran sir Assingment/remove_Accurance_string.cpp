#include<iostream>
#include<string>
using namespace std;
string remove(string na,int idx, int n){
if (idx ==  n) return "";
string name = "";
 name += na[idx];
 return ((na[idx] == 'a')? "" : name) + remove(na,idx+1,n);
}
int main ()
{
 string name = "abcax";
int n = 5;
string nam = remove(name,0,n);
cout<<nam;
return 0;
}