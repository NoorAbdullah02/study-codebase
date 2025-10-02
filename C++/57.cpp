//Second largest Number using loop // Also find is dublicate is here
#include<iostream>
using namespace std;
int imu(int arr[],int size)
{
    int max = arr[0];
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
int main (){
    int n;
    cout<<"Enter the Value of N"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int second_largest=imu(arr,n);
    int imran=arr[second_largest];
    for (int i=0;i<n;i++)
    {
        if (arr[i]==imran)
        {
            arr[i]=-1;
        }
    }
    int second_largest_1=imu(arr,n);
    cout<<"Second Largest Number is = "<<arr[second_largest_1];

return 0;

}

