#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    while(n--){
 int x,y,z;
 cin>>x>>y>>z;
 int sum = 0;
vector<int> v = {x,y,z};
sort(v.begin(),v.end());
int mid = v[1];
 sum = abs(x-mid) + abs(y-mid) + abs(z-mid);
cout<<sum<<endl;
    }
return 0;
}