#include<iostream>
#include<stack>
using namespace std;
int main ()
{
 stack<int> st;
 for(int i=1;i<5;i++){
   int a;
   cin>>a;
   st.push(a);
 }cout<<endl;
cout<<st.top()<<endl;
 while(st.size()!=0){
 cout<<st.top()<<" ";
 st.pop();
 }cout<<endl;
 
// int x = 10; 
// while(st.size()!=0){
// if(st.top()==x){
// cout<<"Number is Found"<<endl;
// return 0;
// }else st.pop();
// }
// cout<<"Number is Not found"<<endl;
return 0;
}