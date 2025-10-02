#include<iostream>
using namespace std;
int rsum(int *arr,int idx,int n,int sum)
{
    if (idx==n)
    {
        return sum;
    }
    sum+=arr[idx];
    rsum(arr,idx+1,n,sum);
}
int main ()
{
 int arr[5]={10,20,30,40,50};
 int *ptr;
 ptr=&arr[0];
 int sum=0;
 int result=rsum(ptr,0,5,sum);
cout<<result<<endl;
return 0;
} 