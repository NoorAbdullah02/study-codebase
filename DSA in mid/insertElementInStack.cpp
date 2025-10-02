#include<iostream>
#include<stack>
using namespace std;
void add(stack<int> &st,stack<int> &rt){
    if (st.empty())return;
    int x = st.top();
    rt.push(x);
    st.pop();
    add(st,rt);
}
void add1(stack<int> &st,stack<int> &rt){
    if (st.empty())return;
    int x = st.top();
    rt.push(x);
    rt.pop();
    add1(st,rt);
}
int main(){
stack<int> st;
st.push(1) ;
st.push(2);
st.push(3);
st.push(4);
st.push(5);
int idx = 2;
int ele = 10;
stack<int> rt;
if (idx == 0){
stack<int>temp;
add(temp,st);
st.push(ele);
add1(temp,st);
while(st.size()!=0){
    cout<<st.top()<<" ";
    st.pop();
}
return 0;
}
int i=st.size();
while(st.size()!=0){
    if (idx == i){
        st.push(ele);
    }
  int x = st.top();
  rt.push(x);
  st.pop();
  i--;
}
while(rt.size()!=0){
    cout<<rt.top()<<" ";
    rt.pop();
}
}
