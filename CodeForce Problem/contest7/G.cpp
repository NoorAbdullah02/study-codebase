#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
using ll = long long int;
int main ()
{
 ll a,b,c;
 cin>>a>>b>>c;
for (ll i = 0;i<=c/a;i++ ){
   for(ll j=0;j<=c/b;j++){
      if (i*a + j*b == c){cout<<"Yes"<<endl;return 0;}
   }
}cout<<"No"<<endl;

return 0;
}