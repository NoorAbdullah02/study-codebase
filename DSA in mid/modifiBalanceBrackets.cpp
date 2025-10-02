#include<iostream>
#include<stack>
using namespace std;
bool f(string s){
    int Lcount = 0;
    int Rcount = 0;
    for (int i=0;i<s.size();i++){
       if(s[i] == '(')Lcount++;
       else if (s[i] == ')') Rcount++;
    }
    int avg = abs(Lcount-Rcount);
    string ans;
for (char ch : s){
    if(avg > 0){
        if (Rcount>Lcount && ch =='('){
    avg--;
    continue;
        }else if (Lcount>Rcount && ch == ')'){
            avg--;
            continue;
        }
    }
   ans += ch; 
}
stack<char> st;
for(int i=0;i<ans.size();i++){
    if (ans[i] == '(')st.push(ans[i]);
    else {
        if (st.empty() || st.top()!=0)return false;
        st.pop();
    }
}
return st.empty();
}
int main (){
    string s;
    cin>>s;
    cout<<f(s)<<endl;
    
    return 0;
}