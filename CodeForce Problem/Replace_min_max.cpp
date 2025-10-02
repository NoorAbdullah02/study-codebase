#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main ()
{
    int n;
    cin>>n;
 int arr[n];
 for (int i=0;i<n;i++) cin>>arr[i];
 int max1 = 0;
 int small = 0;
 for (int i=0;i<n;i++)
 {
   if (arr[i]<arr[small]){
    small = i;
   }
   if (arr[i]>arr[max1]){
    max1 = i;
   }
 }
    swap(arr[max1],arr[small]);
 
 for (int i=0;i<n;i++) cout<<arr[i]<<" ";
return 0;
}