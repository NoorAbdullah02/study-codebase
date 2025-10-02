#include<iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;cin>>n;
    while(n--){
        ll n,k;cin>>n>>k;
       n = n | ((ll)1<<k);
    cout<<n<<endl;
    }
    
    return 0;
}