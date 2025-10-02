#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
 queue<int> q;
 stack<int> st;
 for (int i=0;i<5;i++){
    int a;
    cin>>a;
    q.push(a);
 }
 for(int i=0;i<5;i++){
    int x = q.front();
    q.pop();
    st.push(x);
 }
 for(int i=0;i<5;i++){
    int x = st.top();
    st.pop();
    q.push(x);
 }
 while (!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
 }

return 0;
}