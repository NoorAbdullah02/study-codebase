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
 //sort(v.begin(),v.end());
 int count = 0;
 for (int i=0;i<n;i++){
    if (v[i]<0 && v[i+1]>0){
        count++;
    }
    if(v[i]>0 && v[i+1]<0){
        count++;
    }
 }
 cout<<count<<endl;
return 0;
}