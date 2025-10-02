#include<iostream>
using namespace std;
int  serise(long long int *arr,long long int idx,long long int n,long long int sum){
if(idx==n){
    return sum;
}
sum+=arr[idx];
serise(arr,idx+1,n,sum);
}
int main ()
{
    long long int sum=0,n;
    cin>>n;
 long long int arr[n];
 for (long long int i=0;i<n;i++){
    cin>>arr[i];
 }
 long long int sum1 = serise(arr,0,n,sum);
 cout<<sum1<<endl;
 
return 0;
}