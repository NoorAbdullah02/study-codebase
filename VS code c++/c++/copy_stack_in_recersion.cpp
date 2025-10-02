#include<iostream>
#include<stack>
using namespace std;
void recercopy(stack<int> &st, stack<int> &result){
if (st.empty()){
    return ;
}
int curr = st.top();
st.pop();
recercopy(st,result);
result.push(curr);

}
int main ()
{
 stack<int>cur;
 stack<int>result;
 for (int i=1;i<5;i++){
  cur.push(i);
 }
recercopy(cur,result);
 while(!result.empty()){
    int curr = result.top();
    result.pop();
   cout<<curr<<" ";
 }
return 0;
} 