#include<iostream>
using namespace std;
int main ()
{
 int n;
 cin>>n;
 if (n<2){
  cout<<"-1"<<endl;
 }
 else{
 for (int i=2;i<=n;i = i+2){
   if (i == n){
    cout<<i;
   continue;
   }
   cout<<i<<endl;
 }
 }
return 0;
}