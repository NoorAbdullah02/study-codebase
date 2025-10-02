#include<iostream>
#include<vector>
using namespace std;
using ll = long long int;
void f(vector<ll> &v,ll idx){
    if (idx == -1)return;
    if (idx % 2 == 0){
        cout<<v[idx]<<" ";
    }
    f(v,idx-1);
}
int main ()
{
int n;
cin>>n;
vector<ll> v(n); 
for (int i=0;i<n;i++){
    cin>>v[i];
}
f(v,v.size()-1);
return 0;
}