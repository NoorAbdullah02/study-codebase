//Fog Problem 
#include<iostream>
using namespace std;
int f(int *arr,int n,int idx){
    if (idx==n-1) return 0;
    if (idx==n-2) return f(arr,n,idx+1)+ abs(arr[idx]-arr[idx+1]);
    //this min fuction calculate the minimum value
    return min(f(arr,n,idx+1)+abs(arr[idx]-arr[idx+1]),
    f(arr,n,idx+2)+abs(arr[idx]-arr[idx+2]));
}
int main ()
{ int arr[]= {10,30,40,20};
int n=4;
cout<<f(arr,n,0);

    return 0;

}
