#include<iostream>
#include<stack>
using namespace std;
stack<int> removeFromLast(stack <int> &st){
    stack<int> temp;
    int n = st.size(); 
    while(n!=2){
        int cur = st.top();
        st.pop();
        temp.push(cur);
        n--;
    }
    st.pop();
    stack<int>Result;
    while(!temp.empty()){
        int cur = temp.top();
        temp.pop();
        st.push(cur);
    }
    return st;
}
int main(){
stack<int> st;
for (int i=1;i<5;i++){
    st.push(i);
}
stack<int> re = removeFromLast(st);
while(!re.empty()){
    int cur = re.top();
    re.pop();
    cout<<cur<<" ";
}

    return 0;
}