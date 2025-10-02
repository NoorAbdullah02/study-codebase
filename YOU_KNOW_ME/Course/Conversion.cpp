#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,ans;cin>>s;
    for (int i=0;i<s.size();i++){
        if (s[i] >= 97 && s[i]<=122){
           ans += toupper(s[i]);
        }
        else if (s[i]>=65 && s[i]<=90){
          ans += tolower(s[i]);
        }else ans += " ";
    }
    cout<<ans<<endl;
    return 0;
}