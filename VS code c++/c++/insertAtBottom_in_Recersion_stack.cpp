#include<iostream>
#include<stack>
using namespace std;
void insertAtBottam(stack<int> &st){
   // base case
   if (st.empty()){
    st.push(100);
    return;
   }
   int curr = st.top();
   st.pop();
   insertAtBottam(st);
   st.push(curr);
}
int main ()
{
    stack<int> st;
    stack<int> result;
    for (int i = 1;i<5;i++){
    st.push(i);
    }
    insertAtBottam(st);
    while(!st.empty()){
        int curr = st.top();
        st.pop();
        cout<<curr<<" ";
    }

    return 0;
} 