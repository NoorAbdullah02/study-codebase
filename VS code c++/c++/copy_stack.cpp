#include<iostream>
#include<stack>
using namespace std;
stack<int> copy_stack(stack<int> &cp){
    stack<int> temp;
    while(!cp.empty()){
        int curr = cp.top();
        cp.pop();
        temp.push(curr);
    }
    stack<int> result;
    while(!temp.empty()){
        int curr = temp.top();
        temp.pop();
        result.push(curr);
    }
    return result;
}
int main ()
{
    cout<<"Enter Stack"<<endl;
 stack<int> st;
 for (int i=1;i<5;i++){
    st.push(i);
 }
 stack<int>result = copy_stack(st);
 while(!result.empty()){
    int curr = result.top();
    result.pop();
    cout<<curr<<endl;
 }
 cout<<endl;
return 0;
}