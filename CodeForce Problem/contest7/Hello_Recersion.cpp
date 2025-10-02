#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
ll print(vector<ll> &v,ll idx){
    if (idx == -1)return 0;
     return v[idx] + print(v,idx-1);
    
}
int main ()
{
    ll n;
    cin>>n;
    for (ll i = 1 ; i<= n ; i++ ){
        ll m;
        cin>>m;
        vector<ll> v(m);
        for (ll j=0;j<m;j++){
            cin>>v[j]; }
      ll sum = print(v,v.size()-1);
      cout<<"Case "<<i<<": "<<sum<<endl;
    }
return 0;
}