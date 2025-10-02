#include <iostream>
#include<vector>
using namespace std;
using ll = long long;
bool is_binary(vector<ll>&v,ll tar){
int low = 0, high = v.size()-1;
while(low<=high){
    ll mid = (low+high)/2;
    if(v[mid] == tar)return true;
    else if(v[mid]<tar){
        low = mid+1;
    }else high = mid-1;
}
   return false; 
}
int main() {
    int n,k;cin>>n>>k;
    vector<ll> v(n),a(k);
    for(int i=0;i<n;i++)cin>>v[i];
    for(int i=0;i<k;i++)cin>>a[i];
    
    for(int i=0;i<k;i++){
        if(is_binary(v,a[i]))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}