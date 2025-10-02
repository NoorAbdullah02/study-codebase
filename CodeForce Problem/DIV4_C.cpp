#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int e;
    cin>>e;
    while(e--){
 int n,s,m;
 cin>>n>>s>>m;
 vector<pair<int,int>> v(n);
 for (int i=0;i<n;i++){
    int l,r;
    cin>>l>>r;
    v[i] = {l,r};
 }
    int mx = v[0].first;
    for(int i=1;i<n;i++){
        mx = max(mx,v[i].first - v[i-1].second);
    }
    mx = max(mx,m - v[n-1].second);
 if (mx>=s) cout<<"YES"<<endl;
 else cout<<"NO"<<endl;
    }
return 0;
}