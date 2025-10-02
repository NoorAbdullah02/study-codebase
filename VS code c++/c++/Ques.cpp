#include<iostream>
#include<queue>
using namespace std;
int main ()
{
    queue<int> st;
    for (int i=1;i<=5;i++){
        st.push(i);
    } 
    st.pop();
    while(!st.empty()){
        cout<<st.front()<<" ";
        st.pop();
    }
return 0;
}