#include<bits/stdc++.h>
using namespace std;
void f(vector<int> &v,vector<int>&v1){
    vector<int>c;
    c.insert(c.end(),v1.begin(),v1.end());
    c.insert(c.end(),v.begin(),v.end());
    for (int i=0;i<c.size();i++){
        cout<<c[i]<<" ";
    }cout<<endl;
}
int main ()
{
 int n;
 cin>>n;
 vector<int> v(n);
 vector<int> v1(n);
 for (int i=0;i<n;i++){
    cin>>v[i];
 }
  for (int i=0;i<n;i++){
    cin>>v1[i];
 }
  f(v,v1);
return 0;
}