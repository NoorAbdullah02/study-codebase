#include<bits/stdc++.h>
using namespace std;
void slove(){
  int a,k;
  cin>>a>>k;
  vector<int> v(a);
  for (int i=0;i<a;i++){
    cin>>v[i];
  }
  for (int i=0;i<a;i++){
    bool check = true;
    for (int j=0;j<a;j++){
      if (i == j)continue;
         if (abs(v[i]-v[j]) % k == 0){
          check = false;
          break;
         }
    }
    if (check){
      cout<<"YES"<<endl;
      cout<<i+1<<endl;
      return;
    }
  }
    cout<<"NO"<<endl;
}
int main ()
{
int n;
cin>>n;
while(n--){
  slove();
  }
return 0;
}