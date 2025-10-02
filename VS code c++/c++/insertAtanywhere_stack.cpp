#include<iostream>
#include<stack>
using namespace std;
stack <int> insertAtAnywhere(stack<int> st,int idx){
int count = 0;
int n = st.size();
stack<int> temp;
while(count<n-idx){
    count++;
    int curr = st.top();
    st.pop();
temp.push(curr);
}
st.push(37);
while(!temp.empty()){
    int curr = temp.top();
    temp.pop();
    st.push(curr);
}
return st;
}
int main(){
stack<int> st;
for (int i=1;i<5;i++){
    st.push(i);
}
stack<int> result = insertAtAnywhere(st,2);
while(!result.empty()){
    int curr = result.top();
    result.pop();
    cout<<curr<<" ";
}
return 0;
}