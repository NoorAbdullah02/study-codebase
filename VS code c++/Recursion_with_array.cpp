//print all array element to nth to 1th index
#include<iostream>
using namespace std;
void element(int *arr,int idx,int n)
{
    if(idx==0-1)
    {
        return;
    }
    cout<<arr[idx]<< " ";
    element(arr,idx-1,n);
}
int main (){
    int arr[5]={0,20,30,10,20};
    int *ptr=&arr[0];
element (ptr,4,5);

    return 0;

}