#include<iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;cin>>n;
    while(n--){
        int t;cin>>t;
        ll a[t];
        for (ll i=0;i<t;i++){
            cin>>a[i];
        }
        ll ans = 0;
        for(ll i=0;i<t-1;i++){
            ans = max(ans,a[i]*a[i+1]);
        }
        cout<<ans<<endl;
    }
    return 0;
}