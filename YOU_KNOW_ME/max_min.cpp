#include<bits/stdc++.h>
using namespace std;
int main ()
{
 vector<int>v(3);
 for (int i=0;i<3;i++){
    cin>>v[i];
 }
 int max1 = INT_MIN;
 int small = INT_MAX;
 for (int i=0;i<3;i++){
    max1 = max(v[i],max1);
    small = min (v[i],small);
 }
 cout<<small<<" "<<max1<<endl;
return 0;
}