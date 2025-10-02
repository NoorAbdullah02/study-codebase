#include<iostream>
#include<vector>
using namespace std;
int main ()
{
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    int maxw = 0,maxh = 0;
    for (int i=0;i<n;i++){
      int a,b;
      cin>>a>>b;
      maxw = max(a,maxw);
      maxh = max(maxh,b);
    }
    cout<<2*(maxw+maxh)<<endl;
 }
return 0;
}