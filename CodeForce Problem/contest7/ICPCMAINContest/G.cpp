#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main ()
{
 int n;
 cin>>n;
 while (n--){
    string s;
    cin>>s;
    string r;
    for (int i=0;i<s.size();i++){
     if (s[i]  =='\\')break;
     r.push_back(s[i]);
    }
    cout<<s.size()-'\0'<<" "<<r.size()<<endl;
 }
return 0;
}