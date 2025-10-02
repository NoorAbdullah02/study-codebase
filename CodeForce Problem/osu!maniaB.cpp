#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
 int m;
 cin>>m;
 while(m--){
    int n;
    cin>>n;
    vector<vector<char>> v(n,vector<char>(n));
    for (int i=0;i<n;i++){
        for (int j = 0;j<n;j++){
           cin>>v[i][j];
        }
    }
    for (auto row : v){
      sort(row.begin(),row.end());
    }
    int count = 0;
    for (int i=0;i<n;i++){
        count = 0;
        for (int j = 0;j<n;j++){
           if (v[i][j] == '#'){
            break;
           }
           else{
            count++;
           }class Solution {
public:
    bool isPalindrome(string s){
        string str;
        for (int i=0;i<s.size();i++){
            char ch = s[i];
            if (isalnum(ch)){
            str.push_back(tolower(ch));
            }
        }
        string st = str;
        reverse(str.begin(),str.end());
        if(str == st)return true;
        else return false;
    }
};
        }
        cout<<count+1<<endl;
    }
 }
return 0;
}