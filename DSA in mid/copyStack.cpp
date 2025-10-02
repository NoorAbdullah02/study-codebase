#include<iostream>
#include<stack>
using namespace std;
int main(){
stack<int> st;
int n;
cin>>n;
for (int i=0;i<n;i++){
    int a;
    cin>>a;
    st.push(a);
}
stack<int> rt;
while (st.size()!=0){
    int x = st.top();
    rt.push(x);
    st.pop();
}
cout<<st.size()<<endl;
while(rt.size()!=0){
    int b = rt.top();
    st.push(b);
    rt.pop();
}
while(st.size()!=0){
    cout<<st.top()<<endl;
    st.pop();
}

    return 0;
}