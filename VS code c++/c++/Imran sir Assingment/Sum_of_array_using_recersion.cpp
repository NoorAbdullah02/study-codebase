#include<iostream>
#include<vector>
using namespace std;
int print(vector<int> v,int idx,int n){
    if (idx == n-1) return v[idx];
    return v[idx] + print(v,idx+1,n);
}
int main ()
{
 int n;
   cin>>n;
 vector<int> v;
 for (int i=0;i<n ;i++){
    int a;
    cin>>a;
    v.push_back(a);
 }
  int ans = print(v,0,n);
  cout<<ans;
return 0;
} 