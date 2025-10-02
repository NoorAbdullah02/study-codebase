#include<iostream>
#include<cmath>
#include<stack>
using namespace std;
int cal(int a,int b,char c){
  if (c == '+'){
    return a+b;
  }
  else if (c=='-'){
    return a-b;
  }
  else if (c == '*'){
    return a*b;
  }
  else if (c == '/'){
    return a/b;
  }
}
int eval (string &str){
stack<int> st;
for (int i=0;i<str.size();i++){
    char ch = str[i];
    if (isdigit(ch)){
        st.push(ch -'0');
    }
    else{
        int v2 = st.top();
        st.pop();
        int v1 = st.top();
        st.pop();
        st.push(cal(v1,v2 ,ch));
    }
}
return st.top();
}
int main ()
{
    string str = "231*+9-";
    cout<<eval<<endl;
    return 0;
}