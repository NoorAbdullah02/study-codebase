#include<iostream>
#include<vector>
using namespace std;
using ll = long long int;
    vector<ll> res;
void print(ll n){
    res.push_back(n);
    if (n == 1)return ;
    if (n % 2 == 0){ 
        print(n / 2);
    }else{
        print(n * 3 + 1);
    }
    
}
int main ()
{
 ll n;
 cin>>n;
 print(n);
 for (auto it : res){
    cout<<it<<" ";
 }cout<<endl;
return 0;
}