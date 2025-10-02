#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
 string s;
 cin>>s;
 set<char> set1;
 for (char item : s){
    set1.insert(item);
 }
 int l = set1.size();
 if (l % 2 == 0)cout<<"CHAT WITH HER!"<<endl;
 else cout<<"IGNORE HIM!"<<endl;
return 0;
}
//wjmzbmr
//xiaodao
//sevenkplus