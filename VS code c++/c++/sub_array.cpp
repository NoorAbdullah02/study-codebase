#include<iostream>
#include<vector>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    vector<int> v;
    vector<int>v1;
    for (int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v.push_back(a);
        v1.push_back(a);
    }
    int sum = 0;
   for (int i=0;i<n;i++){
     sum +=v[i]+v1[i];
     cout<<sum<<" ";
   }
return 0;
}