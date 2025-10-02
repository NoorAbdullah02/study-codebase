#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
  vector<int> v(n);
  int avg = 0;
  for (int i=0;i<n;i++){
    int a;
    cin>>a;
    v[i] = a;
    avg += a;
 }
 cout<<fixed;
 cout<<setprecision(12);
 double ans = (double)avg/v.size();
 cout<<ans<<endl;
 return 0;
}
/*
3
50 50 100
4
0 25 50 75
*/