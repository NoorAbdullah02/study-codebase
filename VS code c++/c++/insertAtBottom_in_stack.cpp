#include<iostream>
#include<stack>
using namespace std;
stack<int> insertAtBottom(stack<int> &st){
    stack<int> temp;
 while(!st.empty()){
    int curr = st.top();
    st.pop();
    temp.push(curr);
 }
 temp.push(37);
 stack<int>result;
 while(!temp.empty()){
    int curr = temp.top();
    temp.pop();
    result.push(curr);
 }
 return result;
}
int main ()
{
    stack<int> st;
    for (int i = 1;i<5;i++){
        st.push(i);
    }
    stack<int>get = insertAtBottom(st);
    while(!get.empty()){
        int curr = get.top();
        get.pop();
        cout<<curr<<" ";
    }
    return 0;
}
