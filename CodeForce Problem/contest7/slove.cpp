#include<iostream>
#include<cmath>
using namespace std;
using ll = long long int;
ll tickysum(ll n ){
    ll  sum = n*(n+1)/2;
    ll powersum = 0;
     for (ll i = 1 ; i<=n;i *=2){
      powersum += i; 
     }
     return sum - 2 * powersum; 
}
int main ()
{
 ll n;
 cin>>n;
 //cout<<pow(5,n)<<endl;
 //cout<<25<<endl;
 while(n--){
    ll a;
    cin>>a;
    cout<<tickysum(a)<<endl;
 }
return 0;
}