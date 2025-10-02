#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    for (int i=0;i<n;i++){
        cin>>v[i];
    }
   vector<int> prefixSum (n+1,0);
   for (int i=1;i<=prefixSum.size();i++){
    prefixSum[i] = prefixSum[i-1] - v[i-1]; 
   }
   while (m--){
    int a,b;
    cin>>a>>b;
    int sum = abs(prefixSum[b] - prefixSum[a-1]);
    cout<<sum<<endl;
   }
    return 0;
}