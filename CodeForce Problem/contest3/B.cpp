#include<iostream>
#include<climits>
using namespace std;
string f(string s){
    string res;
    char a = CHAR_MIN;
    for (int i=0;i<s.size();i++){
       a = max(a,s[i]);
    }
    for (int i=0;i<s.size();i++){
        if (s[i] == a)res += s[i];
    }
    return res;
}
int main ()
{
 string n;
 cin>>n;
 cout<<f(n)<<endl;
return 0;
}