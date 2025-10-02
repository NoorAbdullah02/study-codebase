#include<bits/stdc++.h>
using namespace std;
int main ()
{
 int n,a;
 cin>>n>>a;
 vector<int> v(n);
 for (int i=0;i<n;i++){
    cin>>v[i];
 }
 sort(v.begin(),v.end(),greater<long long>());
  
   long long int sum = 0;
    for (int i=0;i<a && i<n;i++){
        
        if(v[i]>0){
         sum += v[i];
        } 
    }
    cout<<sum<<endl;
 
return 0;
}