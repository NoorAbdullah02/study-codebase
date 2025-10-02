#include<iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    ll sum = 0;
    for (ll i=0;i<n;i++){
        cin>>v[i];
    }
    for (ll i=0;i<n;i++){
        sum+=v[i];
    }
    if (sum % 2 == 0){
        cout<<sum<<endl;
        return 0;
    }else {
    vector<ll> res;
    for(int i=0;i<n;i++){
        if (v[i] % 2 !=0)res.push_back(v[i]);
    }
    ll minimum = *min_element(res.begin(),res.end());
    cout<<sum-minimum<<endl;
    
}
    return 0;
}