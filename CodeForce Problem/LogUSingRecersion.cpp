#include<bits/stdc++.h>
using namespace std;
int f(long long int n){
    if(n == 1)return 0;
    return 1 + f(n/2);
}
int main ()
{
    long long int n;
    cin>>n;
    cout<<f(n)<<endl;
//  float m = log2(n);
//  cout<<m<<endl;
return 0;
}