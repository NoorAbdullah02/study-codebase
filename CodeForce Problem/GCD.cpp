#include<bits/stdc++.h>
using namespace std;
int f(long long int a,long long int b){
    if (b == 0)return a;
    return f(b,a%b);
}
int main ()
{
 long long int a,b,GCD,LCM;
 cin>>a>>b;
  GCD = f(a,b);
  LCM = (a*b)/GCD;
 cout<<GCD<<" "<<LCM<<endl;

return 0;
}