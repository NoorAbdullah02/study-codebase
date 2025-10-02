#include<iostream>
#include<vector>
using namespace std;
bool search(vector<int > v,int t,int n,int idx){
    if (idx == n ) return false;
   int ans =   v[idx] == t || search(v,t,n,idx+1);
   return ans;
    
}
int main ()
{
    int n;
    cin>>n;
    int target;
    cin>>target;
 vector<int> v;
 for (int i=0;i<n;i++){
    int a;
    cin >> a;
    v.push_back(a);
 }
if(search(v,target,n,0)) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
return 0;
}