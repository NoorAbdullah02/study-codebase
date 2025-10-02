#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> f(vector<int> &v){
    stack<int> st;
    for (int i=0;i<v.size();i++){
        if (st.empty() || st.top()!=v[i])st.push(v[i]);
        else {
            if (i==v.size()-1 || v[i]!=v[i+1])st.pop();
        }
    }
    vector<int>res;
    while(!st.empty()){
        res.push_back(st.top());
        st.pop();
    }
    reverse(res.begin(),res.end());
    return res;
}
int main (){
    int n;
    cin>>n;
    vector<int>v(n);
    for (int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>res = f(v);
    for (int it:res){
        cout<<it<<" ";
    }
    return 0;
}