#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int f(long long int n,long long int x){
    int sum = 0;
for (int i=0;i<n; i = i+2){
    // if (i == 0)sum += (pow(x,i));
    // sum -= 1;
    //cout<<sum<<" ";
sum += (long long)pow(x,i) ;
}
return sum -1 ;
}
int main ()
{
    long long int n, x;
    cin>>n>>x;
   cout<<f(n,x)<<endl;
 
return 0;
}