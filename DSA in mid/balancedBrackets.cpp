#include<iostream>
#include<stack>
using namespace std;
bool f(string s,stack<char> &st){
    if (s.size()%2!=0)return false;
    for (int i=0;i<s.size();i++){
        if (s[i] =='(')st.push(s[i]);
        else {
            if (st.size() == 0)return false;
            if (st.top() == '(')st.pop();
        }
    }
    return st.empty();
}
int main (){
    stack<char> st; 
    string s;
    cin>>s;
    cout<<f(s,st)<<endl;
    
    return 0;
}