#include<bits/stdc++.h>
using namespace std;
bool f(vector<int> &v,int idx){
    if (idx == v.size())return true;
    if (v[idx] != v[v.size()-1])return false;
        return f(v,idx+1);
}
int main ()
{
    int n;
    cin>>n;
    vector<int>v(n) ;
for (int i=0;i<n;i++){
    cin>>v[i];
}
  if (f(v,0))cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
 
return 0;
}