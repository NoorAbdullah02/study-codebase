#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
using ll = long long int;
int main ()
{
 vector<ll> result = {1,2,3,4,5};
 ll a,b,c,d;
 cin>>a>>b>>c>>d;
 vector<ll> v = {a,b,c,d};
 sort(v.begin(),v.end());
 for (int i=0;i<result.size();i++){
    if (v[i] == result[i]){}
    else{
        cout<<result[i]<<endl;
        break;
    }
 }
return 0;
}