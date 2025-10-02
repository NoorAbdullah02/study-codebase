#include<iostream>
#include<stack>
using namespace std;
stack<int> removeFromLast(stack <int> &st){
    stack<int> temp;
    int n = st.size(); 
    while(n!=1){
        int cur = st.top();
        st.pop();
        temp.push(cur);
        n--;
    }
    stack<int>Result;
    while(!temp.empty()){
        int cur = temp.top();
        temp.pop();
        Result.push(cur);
    }
    return Result;
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