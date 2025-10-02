#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> ngc(vector<int> &v){
    int n = v.size();
    vector<int>result(n,-1);
    stack<int> st;
    st.push(0);
    for (int i=1;i<n;i++){
        while(!st.empty()&&v[i]>v[st.top()]){
            result[st.top()] = v[i];
            st.pop();
        }
        st.push(i);
    }
    return result ;
}
int main ()
{
    int n;
cin>>n;
vector<int>st;
for (int i=0;i<n;i++){
    int a;
    cin>>a;
    st.push_back(a);
}
vector<int> rt = ngc(st);
for (int i=0;i<n;i++){
    cout<<rt[i]<<" ";
}
    return 0;
}