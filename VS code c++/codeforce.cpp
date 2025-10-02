#include<iostream>
#include<vector>
using namespace std;
int main ()
{
 long long int n,rev=0,rem=0,num;
 cin>>n;
 vector<long long int>v(n);
 for (long long int i=0;i<n;i++){
    cin>>v[i];
 }
//  cin>>num;
 long long int count=1,small=v[0];
  long long int i=0;
  while(i<n){
   if (v[i]<small){
    small = v[i];
    count=i+1;
    break;
   }
 
    i++;
  }
  cout<<small<<" "<<count<<endl;

return 0;
}