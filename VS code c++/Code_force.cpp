#include<iostream>
#include<conio.h>
using namespace std;
long long int max1(long long int *arr,long long int idx,long long int n,long long int max){
    if (idx==n){
        return max;
    }
    if (arr[idx]>max){
        max=arr[idx];
    }
            max1(arr,idx+1,n,max);

}
int main ()
{
    long long int n;
    cin>>n;
 long long int arr[n];
 for (long long int i=0;i<n;i++){
cin>>arr[i];
 }
long long int max=arr[0];
 cout<<max1(arr,0,n,max)<<endl;;

getch ();
}