#include<bits/stdc++.h>
using namespace std;
int main ()
{
 int n;
 cin>>n;
 for (int i=1;i<=n;i++){
    int m;
    cin>>m;
    vector<int> v(m);
    for (int i=0;i<m;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    vector<int> res = v;
    bool check = true;
    for (int i=0;i<v.size();i++){
        if(v[i] != res[i])check = false;
    }
    if (check)cout<<v[0]<<endl;return 0;
    if (m == 2)cout<<"Case "<<i<<": Humanity is doomed!"<<endl;
   int l = 0, r = m-1;
   while (l<=r){
    if (v[i]>l)l++;
    if (v[i]<r)r++;
    if (l == r){
       cout<<"Case "<<i<<": "<<l+1<<endl;
        break;
    }
   }
 }
return 0;
}