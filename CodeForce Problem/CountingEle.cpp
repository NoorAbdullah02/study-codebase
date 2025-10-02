#include<bits/stdc++.h>
using namespace std;
int main ()
{
 int n;
 cin>>n;
 vector<int> v(n);
 for (int i=0;i<n;i++){
    cin>>v[i];
 }
 sort(v.begin(),v.end());
 int count = 0;
 for (int i=0;i<n;i= i+2){
    if (v[i] == v[i+1]){
        count++;
    }
 }
 cout<<count<<endl;
return 0;
}