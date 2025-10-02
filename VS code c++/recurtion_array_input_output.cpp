#include<iostream>
using namespace std;
void array_in_out(int *arr,int idx,int n)
{
    if (idx==n){

return ;
    }
    cin>>arr[idx];
    array_in_out(arr,idx+1,n);

}
void array_in_out1(int *arr,int idx,int n)
{
    if (idx==n){

return ;
    }
    cout<<arr[idx]<<" ";
    array_in_out1(arr,idx+1,n);
    
}
int main ()
{
    int arr[5];
    int *ptr=&arr[0];
    array_in_out(ptr,0,5);
        array_in_out1(ptr,0,5);

    return 0;

}