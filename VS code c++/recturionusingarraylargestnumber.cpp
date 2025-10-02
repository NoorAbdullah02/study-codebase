//using recursion find largest element in array.
#include<iostream>
using namespace std;
int max_array(int *arr,int idx,int n,int max)
{
    
    if (idx==n)
    {
        return max;
    }
    if(arr[idx]>max){
          max=arr[idx];
    }
max_array(arr,idx+1,5,max);
    //return max;
}
int main ()
{
    int arr[5]={20,10,30,500,1};
     int max=0;
     int *ptr=&arr[0];
  int largest= max_array(ptr,0,5,max);
   cout<<largest<<endl;
    return 0;

}