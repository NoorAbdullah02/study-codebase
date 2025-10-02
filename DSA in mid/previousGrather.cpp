#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    vector<int> v(n);
    stack<int> st;
    for (int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> res(n);
    res[0] = 1;
    st.push(0);
    for (int i=1;i<n;i++){
         while(!st.empty() && v[st.top()]<v[i]){
             st.pop();
         }
         if (v[st.top()]>v[i])res[i] = i-st.top();
         st.push(i);
    }
    for (auto it : res){
        cout<<it<<" ";
    }cout<<endl;
 
return 0;
} 
//  if (v[st.top()]>v[i])res[i] = i-st.pop();