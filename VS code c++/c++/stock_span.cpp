#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
vector<int> span(vector<int> &v){
int n = v.size();
vector<int> result(n,-1);
stack <int> st;
reverse(v.begin(),v.end());
st.push(1);
for (int i=1;i<n;i++){
    while(!st.empty() && v[i]>v[st.top()]){
    result[st.top()] = n-i-1;
    st.pop();
    }
    st.push(i);
}
reverse(result.begin(),result.end());
reverse(v.begin(),v.end());

return result;
}
int main()
{
       int n;
cin>>n;
vector<int>st;
for (int i=0;i<n;i++){
    int a;
    cin>>a;
    st.push_back(a);
}
vector<int> rt = span(st);
for (int i=0;i<n;i++){
    cout<<i<<" ";
}
    return 0;
}