#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main ()
{
 int n,m;
 cin>>n>>m;
 vector<int> v;
 for (int i=0;i<m;i++){
    int a,b;
    cin>>a>>b;
    v.push_back(a*b);
 }
 sort(v.begin(),v.end(),greater<int>());
 int match = 0;
 for (int i=0;i< min(n,(int)v.size());i++){
    match += v[i];
 }
 cout<<match<<endl;
return 0;
}