#include<iostream>
#include<stack>
using namespace std;
void StackReverse_print(stack<int> &rt){
    if(rt.empty())return;
    int x = rt.top();
    rt.pop();
    StackReverse_print(rt);
    cout<<x<<" ";
}
 void print(stack<int> &st){
  if (st.empty())return;
  cout<<st.top()<<" ";
  st.pop();
  print(st);
 }
int main ()
{
stack<int> st;
st.push(1) ;
st.push(2);
st.push(3);
st.push(4);
st.push(5);
StackReverse_print(st);
//print(st);

return 0;
}