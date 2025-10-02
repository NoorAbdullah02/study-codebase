#include<bits/stdc++.h>
using namespace std;
int main ()
{
 int x,y,z;
 cin>>x>>y>>z;
 vector<int> v = {x,y,z};
 sort(v.begin(),v.end());
 for (int val : v){
    cout<<val<<endl;
 }
 cout<<endl<<x<<endl<<y<<endl<<z<<endl;
return 0;
}