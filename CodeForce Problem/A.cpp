#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main (){
  int n = 4;  
  vector<int> v(n+1);
  for (int i=0;i<n;i++){
    int a;cin>>a;
    v[i] = a;
  }
  sort(v.begin(),v.end());
  int count = 0;
  for (int i=0;i<n;i++){
    if (v[i]!=v[i+1])count++;
  }
  cout<<n-count<<endl;
    return 0;
}