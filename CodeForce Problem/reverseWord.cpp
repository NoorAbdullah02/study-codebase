//reverse word in a sentance
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
 string name,res;
 getline(cin,name);
 stringstream ss(name);
 string word;

 while((ss >> word)){
    reverse(word.begin(),word.end());
    res += word + " ";
 }
 res.pop_back();
 cout<<res<<endl;
 return 0;
}