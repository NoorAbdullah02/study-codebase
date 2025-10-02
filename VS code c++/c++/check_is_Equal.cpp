#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool check(string n,string n1){
    vector<int> freq(26);
if (n.size() != n1.size())return false;
for (int i=0;i<n.size();i++){
freq[n[i]-'a']++;
freq[n1[i]-'a']--;
}
for (int i=0;i<26;i++){
    if (freq[i]!=0) return false;
}
return true;
}
int main ()
{
    string n,n1;
    cin>>n>>n1;
    if (check(n,n1)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}