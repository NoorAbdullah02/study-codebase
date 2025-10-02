#include<iostream>
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
    ll n;
    cin>>n;
    while(n--){
        ll a;
        cin>>a;
        ll sum = (a*(a+1))/2;
        ll sum_of_pow = 0;
      for (ll i=1;i<=a;i*=2){
         sum_of_pow += i;
      }
      cout<<sum-2*sum_of_pow<<endl;
    }
    
    return 0;
}