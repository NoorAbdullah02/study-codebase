#include<iostream>
using namespace std;
using ll = long long int ;
ll fib( ll n){
    if (n == 0)return 0;
    if (n == 1)return 1;
    return fib(n-1) + fib(n-2); 
}
int main ()
{
    ll n;
    cin>>n;
    cout<<fib(n-1)<<endl;
return 0;
}