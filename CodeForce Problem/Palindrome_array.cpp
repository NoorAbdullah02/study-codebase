#include<bits./stdc++.h>
using namespace std;
bool palindrome(int arr[],int n){
    int check = 1;
    int size  = n-1;
    for (int i=0;i<n/2;i++)
    {
        if (arr[i] != arr[size-i]){
          check = 0;
        }
    }
 return check;
}
int main ()
{
    int n,temp;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)cin>>arr[i];
  int ans = palindrome(arr,n);
  if (ans == 1){
     cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
    return 0;
}