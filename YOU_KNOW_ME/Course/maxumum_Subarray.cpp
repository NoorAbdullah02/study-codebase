#include<iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;cin>>n;
    vector<ll>v(n);
    ll sum = INT_MIN;
    ll max_sub = INT_MIN;
    for (ll i=0;i<n;i++){
        cin>>v[i];
        sum = max(v[i],sum+v[i]);
        max_sub = max(max_sub,sum);
    }
    cout<<max_sub<<endl;
    
    return 0;
}