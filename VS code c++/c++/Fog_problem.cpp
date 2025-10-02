#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int f(vector<int> &v,int n,int idx){
if (idx ==n-1) return 0;
if (idx == n-2) return f(v,n,idx+1) + abs(v[idx] - v[idx+1]);
return min (f(v,n,idx+1) + abs(v[idx] - v[idx + 1]) , (f(v,n,idx+2) + abs(v[idx] - v[idx+2])));
}
int main ()
{
    int n;
    cin>>n;
vector<int> v;
for (int i=0;i<n;i++){
int a;
cin>>a;
v.push_back(a);
}
int ans = f(v,n,0);
cout<<ans<<endl;
    return 0;
}