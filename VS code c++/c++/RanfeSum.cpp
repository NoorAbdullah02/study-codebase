#include<iostream>
using namespace std;
int main ()
{
 int n;
 cin>>n;
 while(n--){
   long long  int a,b;
    cin>>a>>b;
    int sum = 0;
    sum = (b*(b+1)/2) - (a*(a-1)/2);
    cout<<sum<<endl; 
 }
return 0;
}