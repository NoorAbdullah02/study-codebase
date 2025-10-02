#include<iostream>
#include<vector>
using namespace std;
using ll = long long int;
bool print(vector<ll> &v,ll idx , ll idx1){
  if (idx >= idx1) return true;
  if (v[idx] != v[idx1])return false;
  print(v,idx+1,idx1-1);

}
int main ()
{
    ll n;
    cin>>n;
    vector<ll> v(n);
    for (ll i=0;i<n;i++){
        cin>>v[i];
    }
 if(print(v,0,v.size()-1)){
   cout<<"YES"<<endl;
 }else cout<<"NO"<<endl;
return 0;
}