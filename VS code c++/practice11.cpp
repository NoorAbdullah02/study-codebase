#include<iostream>
using namespace std;
void Amax(int *arr,int idx,int n)
{
    if(idx==n)
    {
        return ;
    }
    cin>>arr[idx];
    Amax(arr,idx+1,n);
}
int Amax1(int *arr,int idx,int n,int max)
{
    if (idx==n)
    {
        return max;
    }
    if (arr[idx]>max)
    {
        max=arr[idx];
    }

   Amax1(arr,idx+1,n,max);
}

int main ()
{
    int arr[5];
    int max=0;
    int *ptr=&arr[0];
    cout<<"Enter Array Element"<<endl;
    Amax(ptr,0,5);
       int largest= Amax1(ptr,0,5,max);
    cout<<"Largest Element is the array is "<<largest<<endl;
    return 0;

}