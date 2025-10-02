#include<iostream>
using namespace std;
int imu(int arr[],int size)
{
    int max=arr[0];
    int index=0;
    for (int i=0;i<size;i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
             index=i;

        }
    }
    return index;
}
int main ()
{
int arr[7]={20,12,45,99,74,74,58};
int size=7;
int max_value=imu(arr,size);
arr[max_value]=-1;
int max_value1=imu(arr,size);
cout<<arr[max_value1]<<endl;


}
